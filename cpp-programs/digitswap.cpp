#include <iostream>
#include <string>

int main()
{

  int input;
  std::cin >> input;
  std::string swapped_digit;
  std::string digit = std::to_string(input);

  int num = digit.length();

  for (int i = num-1; i >= 0; i--)
  {
    swapped_digit += digit[i];
  }
  int ans = stoi(swapped_digit);
  std::cout << ans;
}