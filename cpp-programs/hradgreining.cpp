#include<iostream>
#include<vector>
#include<sstream>

int main () {

  std::string dna_string;
  std::string tested="COV";

  std::cin >> dna_string;

  bool isFound = dna_string.find(tested) != std::string::npos;

  if (isFound) {
    std::cout << "Veikur!";
  }
  else {
    std::cout << "Ekki veikur!";
  }
}