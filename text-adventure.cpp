#include <iostream>
#include <string>

/* This script is creating your cricket team
from available players for next game.
*/

int main()
{

  std::string team1;
  int openers, midOrder, allrounders, wk, bowlers;
  int SRH = 0, RCB = 0;

  std::cout << "Openers: \n";
  std::cout << "\t 1) Abhishek, Head \n";
  std::cout << "\t 2) Kohli, Faf \n";
  std::cin >> openers;

  if (openers != 1 && openers != 2)
  {
    std::cout << "Choosed wrong option. \n";
    std::cout << "automatically choosing 1st option. \n \n";
    SRH++;
    std::string team1 = "Abhishek, Head";
    std::cout << "team1: " << team1 << "\n";
  }
  else if (openers == 1)
  {
    SRH++;
    std::string team1 = "Abhishek, Head";
  }
  else
  {
    RCB++;
    std::string team1 = "Kohli, Faf ";
  }

  std::cout << "team1: " << team1 << "\n";
  std::cout << "Middle  order: \n";
  std::cout << "\t 1) patidhar, lomror \n";
  std::cout << "\t 2) Tripathy, Markram \n";
  std::cin >> midOrder;

  if (midOrder != 1 && midOrder != 2)
  {
    std::cout << "Choosed wrong option. \n";
    std::cout << "automatically choosing 2nd option. \n \n";
    RCB++;
  }
  else if (midOrder == 1)
  {
    SRH++;
  }
  else
  {
    RCB++;
  }

  std::cout << "All-rounders: \n";
  std::cout << "\t 1) Shahbaz, Nitish, Cummins \n";
  std::cout << "\t 2) jacks, green, maxwell \n";
  std::cin >> allrounders;

  if (allrounders != 1 && allrounders != 2)
  {
    std::cout << "Choosed wrong option. \n";
    std::cout << "automatically choosing 1st option. \n \n";
    SRH++;
  }
  else if (allrounders == 1)
  {
    SRH++;
  }
  else
  {
    RCB++;
  }

  std::cout << "Wicket keepers: \n";
  std::cout << "\t 1) DK \n";
  std::cout << "\t 2) Klassen \n";
  std::cin >> wk;

  if (wk != 1 && wk != 2)
  {
    std::cout << "Choosed wrong option. \n";
    std::cout << "automatically choosing 2nd option. \n \n";
    RCB++;
  }
  else if (wk == 1)
  {
    SRH++;
  }
  else
  {
    RCB++;
  }

  std::cout << "Bowlers: \n";
  std::cout << "\t 1) siraj, swapnil, topley \n";
  std::cout << "\t 2) Bhuvi, Natarajan, Unadtkat \n";
  std::cin >> bowlers;

  if (bowlers != 1 && bowlers != 2)
  {
    std::cout << "Choosed wrong option. \n";
    std::cout << "automatically choosing 1st option. \n \n";
    SRH++;
  }
  else if (bowlers == 1)
  {
    SRH++;
  }
  else
  {
    RCB++;
  }

  std::cout << "SRH count: " << SRH << "\n";
  std::cout << "RCB count: " << RCB << "\n";
  std::cout << "team1: " << team1 << "\n";
}