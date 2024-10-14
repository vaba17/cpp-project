#include<iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string user;
  std::cin >> user;

  std::string face = "(";
  int n = user.length();
  int eye = user.find("(");
  int right_bars = (n - (eye+2)) ;

  if (eye == right_bars)
  {
    std::cout << "correct";
  }
  else {
    std::cout << "fix";
  }
}