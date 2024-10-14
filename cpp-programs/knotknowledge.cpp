#include <iostream>
using namespace std;

int main()
{
  int n;
  std::cin >> n;
  int needToLearn[n], learned[n - 1];
  for (int i = 0; i < n; i++)
  {
    std::cin >> needToLearn[i];
  }
  for (int i = 0; i < n - 1; i++)
  {
    std::cin >> learned[i];
  }

  int rem;
  for (int i = 0; i < n; i++)
  {
    int flag = 0;
    for (int j = 0; j < n - 1; j++)
    {
      if (needToLearn[i] == learned[j])
      {
        flag = 1;
      }
    }

    if (flag == 0)
    {
      rem = needToLearn[i];
      break;
    }
  }
  std::cout << rem << endl;

  return 0;
}