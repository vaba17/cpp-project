#include <iostream>

//Pass-by-reference example

int triple(int &i)
{

  i = i * 3;

  return i;
}

int main()
{

  int num = 1;

  std::cout << triple(num) << "\n";
  std::cout << triple(num) << "\n";
}