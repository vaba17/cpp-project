#include <iostream>

double average(double num1, double num2)
{
  double avg = (num1 + num2) / 2;
  return avg;
}

int main()
{

  std::cout << average(54.0, 44.0) << "\n";
  std::cout << average(11.0, 12.0) << "\n";
}