#include <iostream>

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string text;
  std::getline(std::cin, text);

  int smiley = 0, frowny = 0;

  for (int i = 1; i < text.size()+1 - 1; i++) {
    if (text[i - 1] == ':' && text[i] == ')') {
      smiley++;
    }
    else if (text[i - 1] == ':' && text[i] == '(') {
      frowny++;
    }
  }
  if (smiley != 0 && frowny == 0) {
    std::cout << "alive";
  }
  else if (smiley == 0 && frowny != 0) {
    std::cout << "undead";
  }
  else if (smiley != 0 && frowny != 0) {
    std::cout << "double agent";
  }
  else {
    std::cout << "machine";
  }
}