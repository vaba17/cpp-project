/*
This program is about Rock Paper Scissor gaem.
Compares user's choice with computers choice and determines the winner.
Informs user who the winner is
*/

#include <iostream>
#include <stdlib.h>

int main()
{
  srand(time(NULL));

  // initialize and assign random number for comp choice
  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "=======================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "=======================\n";

  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";

  std::cout << "shoot! \n";

  std::cin >> user;

  if (user == 1 && computer == 1)
  {
    std::cout << "It's a tie \n";
  }
  if (user == 1)
  {
    if (computer == 2)
    {
      std::cout << "you choosed ROCK \n";
      std::cout << "Computer choosed PAPER \n";
      std::cout << "You lost. better luck next time! \n";
    }
    if (computer == 3)
    {
      std::cout << "you choosed ROCK \n";
      std::cout << "Computer choosed SCISSOR \n";
      std::cout << "HURRAY! You WON! \n";
    }
  }

  else if (user == 2)
  {
    if (computer == 1)
    {
      std::cout << "you choosed PAPER \n";
      std::cout << "Computer choosed ROCK \n";
      std::cout << "HURRAY! You WON! \n";
    }
    if (computer == 3)
    {
      std::cout << "you choosed PAPER \n";
      std::cout << "Computer choosed SCISSOR \n";
      std::cout << "You lost. better luck next time! \n";
    }
  }

  else if (user == 1)
  {
    if (computer == 2)
    {
      std::cout << "you choosed SCISSOR \n";
      std::cout << "Computer choosed PAPER \n";
      std::cout << "HURRAY! You WON!  \n";
    }
    if (computer == 3)
    {
      std::cout << "you choosed SCISSOR \n";
      std::cout << "Computer choosed SCISSOR \n";
      std::cout << "You lost. better luck next time! \n";
    }
  }

  else
  {
    std::cout << "Choose 1-3 options mentioned above \n";
  }
}