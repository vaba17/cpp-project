#include <iostream>
#include "song1.hpp"

int main()
{

  //Declaring constructor
  Song back_to_black("Back to Black", "Amy Winehouse");

  std::cout << back_to_black.get_title();
  std::cout << back_to_black.get_artist();
}