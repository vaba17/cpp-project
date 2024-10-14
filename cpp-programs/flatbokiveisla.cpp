#include<iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n,m;
  std::cout << "Enter number of slices:";
  std::cin >> n;
  std::cout << "Enter number of residents:";
  std::cin >> m;

  std::cout << n%m ;
}