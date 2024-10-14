#include<iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string unnar_voice;

  std::cin >> unnar_voice;

  int num = unnar_voice.length();
  std::cout << num ;
}