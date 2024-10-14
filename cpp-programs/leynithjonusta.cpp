#include<iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string user, email;
  getline(std::cin, user);

  for (int i = 0; i<= user.length(); i++) {
    //std::cout << user[i] << "\n";
    if (user[i] != ' ') {
      email += user[i];
    }
  }
  std::cout << email;
}