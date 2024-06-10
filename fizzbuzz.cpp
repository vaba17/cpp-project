#include <iostream>

int main()
{
  /* Pragra that prints 1-100
  for every multiple of 3 prints "FIzz",
  for every multiples of 5 prints "Buzz",
  for numbers which are multiples of both 3 & 5 prints "FizzBuzz"
  */

  for (int i = 0; i < 101; i++)
  {
    if (i % 3 == 0 && i % 5 != 0)
    {
      std::cout << "Fizz\n";
    }
    else if (i % 5 == 0 && i % 3 != 0)
    {
      std::cout << "BUZZ\n";
    }
    else if (i % 3 == 0 && i % 5 == 0)
    {
      std::cout << "FizzBuzz\n";
    }
    else
    {
      std::cout << i << "\n";
    }
  }
}