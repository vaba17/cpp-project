#include <iostream>
#include <cstdlib>

int main()
{
  std::cout << "MAGIC 8-BALL: \n";

  // below declaration set the "seed" of the random number generator
  // or else it will repeat same number
  srand(time(NULL));
  // store only random number from 0-9
  int answer = std::rand() % 10;

  if (answer == 0)
  {
    std::cout << "It is certain. \n";
  }
  else if (answer == 1)
  {
    std::cout << " It is decidedly so. \n";
  }
  else if (answer == 2)
  {
    std::cout << "Without a doubt. \n";
  }
  else if (answer == 3)
  {
    std::cout << "Yes - definately. \n";
  }
  else if (answer == 4)
  {
    std::cout << "You may rely on it. \n";
  }
  else if (answer == 5)
  {
    std::cout << "As I see it, yes. \n";
  }
  else if (answer == 6)
  {
    std::cout << "Most likely. \n";
  }
  else if (answer == 7)
  {
    std::cout << "Outlook good. \n";
  }
  else if (answer == 8)
  {
    std::cout << "yes. \n";
  }
  else
  {
    std::cout << "Very doubtful \n";
  }
}