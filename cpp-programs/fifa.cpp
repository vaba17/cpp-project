#include<iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n, k;
  std::cin >> n;
  std::cin >> k;

  int year = (n / k) + 2022 ;
  std::cout << year ;

}