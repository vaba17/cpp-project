#include<iostream>

int main() {

  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int x, y;
  std::cin >> x;
  std::cin >> y;

  if (x>0 && y>0) {
    std::cout << "1";
  }
  else if (x<0 && y>0) {
    std::cout << "2";
  }
  else if (x<0 && y<0) {
    std::cout << "3";
  }
  else if (x>0 && y<0) {
    std::cout << "4";
  }
}