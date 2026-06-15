#!/usr/bin/env bash
# postToolUse hook: logs write tool usage to write-log.json
set -euo pipefail

INPUT=$(cat)
SESSION_ID=$(echo "$INPUT" | jq -r '.session_id')
FILE_PATH=$(echo "$INPUT" | jq -r '.tool_input.path // .tool_input.operations[0].path // "unknown"')
COMMAND=$(echo "$INPUT" | jq -r '.tool_input.command // "unknown"')

LOG_FILE="$(echo "$INPUT" | jq -r '.cwd')/write-log.json"

# Initialize log file if missing
[ -f "$LOG_FILE" ] || echo '[]' > "$LOG_FILE"

# Append entry
ENTRY=$(jq -n \
  --arg sid "$SESSION_ID" \
  --arg ts "$(date -u +%Y-%m-%dT%H:%M:%SZ)" \
  --arg path "$FILE_PATH" \
  --arg cmd "$COMMAND" \
  '{session_id: $sid, timestamp: $ts, file: $path, operation: $cmd}')

jq --argjson entry "$ENTRY" '. += [$entry]' "$LOG_FILE" > "$LOG_FILE.tmp" && mv "$LOG_FILE.tmp" "$LOG_FILE"