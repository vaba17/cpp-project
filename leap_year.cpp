/*
If the year can be evenly divided by 4 then it is a leap year, however…

If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.

If that year is evenly divisible by 400, then it is a leap year.
*/

#include <iostream>

int main()
{
  int year;

  std::cout << "Enter year: ";
  std::cin >> year;

  if (std::to_string(year).length() != 4)
  {
    std::cout << "Enter 4 digit number \n";
  }
  else if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
  {
    std::cout << "Entered year is a leap year. \n";
  }
  else
  {
    std::cout << "Entered year is not leap year \n";
  }
}