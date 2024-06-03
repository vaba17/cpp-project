#include <iostream>
#include <cmath>

int main()
{

  double a, b, c, root1, root2;
  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  // positive root value
  root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);

  // negative root value
  root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

  std::cout << "root1 value: " << root1 << "\n";
  std::cout << "root2 value: " << root2 << "\n";
}