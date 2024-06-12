#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text)
{

  std::string reverseText = "";

  for (int i = text.size() - 1; i >= 0; i--)
  {
    reverseText += text[i];
  }

  if (reverseText == text)
  {
    return true;
  }

  return false;
}

int main()
{

  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("sunny") << "\n";
  std::cout << is_palindrome("racecar") << "\n";
}