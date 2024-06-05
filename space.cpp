#include <iostream>

int main()
{

  double earth_wt, planet_wt;
  int planet_no;

  std::cout << "Enter your weight on earth: ";
  std::cin >> earth_wt;

  std::cout << "Enter a number for the planet you want to fight on: ";
  std::cin >> planet_no;

  switch (planet_no)
  {
  case 1:
    // Calculate weight on Mercury planet
    planet_wt = earth_wt * 0.38;
    std::cout << "Your weight on Mercury: " << planet_wt << "\n";
    break;
  case 2:
    // Calculate weight on Venus planet
    planet_wt = earth_wt * 0.91;
    std::cout << "Your weight on Venus: " << planet_wt << "\n";
    break;
  case 3:
    // Calculate weight on Mars planet
    planet_wt = earth_wt * 0.38;
    std::cout << "Your weight on Mars: " << planet_wt << "\n";
    break;
  case 4:
    // Calculate weight on Jupiter planet
    planet_wt = earth_wt * 2.34;
    std::cout << "Your weight on Jupiter: " << planet_wt << "\n";
    break;
  case 5:
    // Calculate weight on Saturn planet
    planet_wt = earth_wt * 1.06;
    std::cout << "Your weight on Saturn: " << planet_wt << "\n";
    break;
  case 6:
    // Calculate weight on Uranus planet
    planet_wt = earth_wt * 0.92;
    std::cout << "Your weight on Uranus: " << planet_wt << "\n";
    break;
  case 7:
    // Calculate weight on Neptune planet
    planet_wt = earth_wt * 1.19;
    std::cout << "Your weight on Neptune: " << planet_wt << "\n";
    break;
  default:
    std::cout << "please enter between 1-7 number for planet number \n";
  }
}