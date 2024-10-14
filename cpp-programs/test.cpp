#include<iostream>
#include<sstream>
#include<vector>

int main ()
{
  std::string str = "0 3 3";

  // variable to store token obtained from the original
  // string
  std::string s;

  // constructing stream from the string
  std::stringstream ss(str);

  // declaring vector to store the string after split
  std::vector<std::string> vv;

  // using while loop until the getline condition is
  // satisfied
  // ' ' represent split the string whenever a space is
  // found in the original string
  while (std::getline(ss, s, ' '))
  {

    // store token string in the vector
    vv.push_back(s);
  }


  // print the vector
  for (int i = 0; i < vv.size(); i++)
  {
    std::cout << vv[i] << "\n";
  }


  std::vector<int> v(1, 0);

  int j = 0;
  for (int i = 0; i < s.size(); i++)
  {
    // s[i] - '0' would also work here
    v[j] = v[j] * 10 + (s[i] - 48);
  }

  for (int i = 0; i < v.size(); i++)
  {
    std::cout << v[i] << "\n";
  }
}