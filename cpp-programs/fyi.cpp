#include<iostream>
#include<sstream>

int main() {

  int tel_num;
  std::cin >> tel_num;

  std::string num_as_str = std::to_string(tel_num);

  std::string prefix;
  for (int i = 0; i < 3; i++) {
    prefix += num_as_str[i];
  }

  if (prefix == "555"){
    std::cout << "1";
  }
  else {
    std::cout << "0";
  }
}