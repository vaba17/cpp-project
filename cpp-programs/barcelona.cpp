#include<iostream>
#include<vector>

int main() {

  std::vector<int> numbers;
  int n, k, num;
  std::cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    std::cin >> num;
    numbers.push_back(num);
  }

  if (k == numbers[0]) {
    std::cout << "fyrst";
  }
  else if (k == numbers[1]) {
    std::cout << "naestfyrst";
  }
  else {
    std::cout << n << " " << "fyrst";
  }


}