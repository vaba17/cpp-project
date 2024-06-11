#include <iostream>

/*
DEFAULT ARGUMENT EXAMPLE
Function make_coffee() built out to order
coffee with default balck coffee option
*/
#include "coffee.hpp"

int main()
{

  // coffee black
  std::cout << make_coffee();

  // coffee with milk
  std::cout << make_coffee(true);

  // coffee with milk and sugar
  std::cout << make_coffee(true, true);

  // coffee with sugar
  std::cout << make_coffee(false, true);
}