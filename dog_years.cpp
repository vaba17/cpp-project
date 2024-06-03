#include <iostream>

int main() {

  int dog_age = 9;

  // dog_age calculation

  /* The first two years of a dog’s life count as 21 human years.
  Each following year counts as 4 human years. */

  // early years of dog
  int early_years, later_years,  human_years;

  early_years = 21;

  // later_years are counted after dog 2 years
  later_years = (dog_age -2) * 4;

  //human_years is sum of early and later years

  human_years = early_years + later_years;

  std::cout << "My name is jacky! Ruff ruff, I am " << human_years << " years old in human years. \n";

}
