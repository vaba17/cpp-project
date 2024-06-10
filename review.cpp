/*
Program finding sum of even numbers and
the product of odd numbers in a vector
*/

#include <iostream>
#include <vector>

int main()
{
  int even = 0, odd = 1;
  std::vector<int> number = {2, 4, 3, 6, 1, 9};

  for (int i = 0; i < number.size(); i++)
  {

    if (number[i] % 2 == 0)
    {
      even = number[i] + even;
    }
    else
    {
      odd = number[i] * odd;
    }
  }
  std::cout << "Sum of even numbers is " << even << "\n";
  std::cout << "Product of odd numbers is " << odd << "\n";
}