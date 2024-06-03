#include <iostream>

int main()
{

  double pesos, reasis, soles, dollars;

  std::cout << "Enter number Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number Brazilian Reais: ";
  std::cin >> reasis;

  std::cout << "Enter number Peruvian Soles: ";
  std::cin >> soles;

  dollars = (0.056543078 * pesos) + (0.19 * reasis) + (0.27 * soles);

  std::cout << "US Dollars = $" << dollars;
}