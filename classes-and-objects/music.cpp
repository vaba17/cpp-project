#include <iostream>
#include "song.hpp"

int main()
{

  // Creating an object(electric_relaxation)
  Song electric_relaxation;

  // Adding values to object attributes
  electric_relaxation.add_title("Electric Relaxation");
  std::cout << electric_relaxation.get_title();

  electric_relaxation.add_artist("A Tribe Called Quest");
  std::cout << electric_relaxation.get_artist();
}