#include <iostream>
#include "profile.hpp"

int main()
{

  Profile sam("Sam Drakkila", 30, "new York", "USA", "he/him");
  sam.add_hobby("Writing code in CODECADEMY");
  sam.add_hobby("Watching Cricket match");
  sam.add_hobby("Playing Chess");

  std::cout << sam.view_profile();
}