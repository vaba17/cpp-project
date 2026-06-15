#!/usr/bin/env bash

set -euo pipefail

trap 'echo "Script interrupted" >&2; exit 130' INT TERM
trap 'exit 0' EXIT

############################################
# Validate arguments
############################################
if [ "$#" -lt 2 ] || [ "$#" -gt 3 ]; then
  echo "Error: Expected 2 or 3 arguments, got $#." >&2
  echo "Usage: $0 <arg1> <arg2> [arg3]" >&2
  exit 1
fi

############################################
# Script start timestamp
############################################
readonly start_ts="$(date +"%Y-%m-%d %H:%M:%S")"
readonly start_epoch="$(date +%s)"

echo "Script started at: $start_ts (epoch: $start_epoch)"
echo "Number of arguments: $#"
echo "----------------------------------------"

############################################
# Helper: check if integer is prime
# Args: $1 - integer to test
# Returns: 0 if prime, 1 if not
############################################
is_prime() {
  local n="$1"
  # Only positive integers > 1 can be prime
  if [ "$n" -le 1 ]; then
    return 1
  fi
  if [ "$n" -le 3 ]; then
    return 0
  fi
  if [ $((n % 2)) -eq 0 ] || [ $((n % 3)) -eq 0 ]; then
    return 1
  fi
  local i=5
  while [ $((i * i)) -le "$n" ]; do
    if [ $((n % i)) -eq 0 ] || [ $((n % (i + 2))) -eq 0 ]; then
      return 1
    fi
    i=$((i + 6))
  done
  return 0
}

############################################
# Stats
############################################
num_int=0
num_str=0
num_primes=0
num_str_with_vowels=0

############################################
# Process each argument
############################################
index=1
for arg in "$@"; do
  echo "Argument #$index: '$arg'"

  if [[ "$arg" =~ ^-?[0-9]+$ ]]; then
    ########################################
    # Integer classification
    ########################################
    num_int=$((num_int + 1))

    # Sign classification
    if [[ "$arg" =~ ^-?[0-9]+$ ]] && [ "$arg" -gt 0 ]; then
      sign_desc="positive integer"
    elif [ "$arg" -lt 0 ]; then
      sign_desc="negative integer"
    else
      sign_desc="zero (whole number)"
    fi

    # Whole number: any integer is a whole number in this context
    whole_desc="whole number"

    # Prime check only for positive > 1
    if [ "$arg" -gt 1 ]; then
      if is_prime "$arg"; then
        prime_desc="prime"
        num_primes=$((num_primes + 1))
      else
        prime_desc="not prime"
      fi
    else
      prime_desc="not prime (<= 1)"
    fi

    echo "  Type        : integer"
    echo "  Classification: $sign_desc, $whole_desc, $prime_desc"
  else
    ########################################
    # String classification
    ########################################
    num_str=$((num_str + 1))

    # Extract vowels
    vowels="$(printf '%s' "$arg" | tr -cd 'AEIOUaeiou')"
    vowel_count=${#vowels}

    if [ "$vowel_count" -gt 0 ]; then
      num_str_with_vowels=$((num_str_with_vowels + 1))
      # Unique vowels
      unique_vowels="$(
        printf '%s\n' "$vowels" | fold -w1 | tr '[:upper:]' '[:lower:]' | sort -u | tr -d '\n'
      )"
      echo "  Type        : string"
      echo "  Vowels found: yes"
      echo "  # of vowels : $vowel_count"
      echo "  Vowels used : $unique_vowels"
    else
      echo "  Type        : string"
      echo "  Vowels found: no"
    fi
  fi

  echo "----------------------------------------"
  index=$((index + 1))
done

############################################
# Summary
############################################
echo "SUMMARY"
echo "Script started at: $start_ts (epoch: $start_epoch)"
echo "Total arguments           : $#"
echo "  Integer arguments       : $num_int"
echo "    of which are prime    : $num_primes"
echo "  String arguments        : $num_str"
echo "    with vowels           : $num_str_with_vowels"

exit 0
