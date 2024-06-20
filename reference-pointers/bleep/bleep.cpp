#include <iostream>
#include <string>

#include "functions.hpp"

int main()
{

  std::string word = "broccoli";
  std::string text = "Is broccoli really healthy? Why it is sold in all stores accross globe?";

  bleep(word, text);

  for (int i = 0; i < text.size(); i++)
  {
    std::cout << text[i];
  }

  std::cout << "\n";
}