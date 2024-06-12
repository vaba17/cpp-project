#include <iostream>
#include <cmath>

int tenth_power(int num)
{
  return pow(num, 10);
}

int main()
{

  std::cout << tenth_power(10) << "\n";
  std::cout << tenth_power(11) << "\n";
  std::cout << tenth_power(12) << "\n";
}