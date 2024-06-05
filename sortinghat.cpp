#include <iostream>

int main()
{

  std::string house;
  int max = 0;
  // declare all groups
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  // store each of their answers to the 4 quiz questions
  int ans1, ans2, ans3, ans4;

  std::cout << "The Sorting Hat Quiz! \n";

  std::cout << "Q1) When I'm dead, I want people to remember me as: \n \n";
  std::cout << "\t 1) The Good \n";
  std::cout << "\t 2) The Great \n";
  std::cout << "\t 3) The Wise \n";
  std::cout << "\t 4) The Bold \n";

  std::cin >> ans1;

  if (ans1 == 1)
  {
    hufflepuff++;
  }
  else if (ans1 == 2)
  {
    slytherin++;
  }
  else if (ans1 == 3)
  {
    ravenclaw++;
  }
  else if (ans1 == 4)
  {
    gryffindor++;
  }
  else
  {
    std::cout << "Invalid input";
  }

  std::cout << "Dawn or Dusk? \n \n";
  std::cout << "\t 1) Dawn \n";
  std::cout << "\t 2) Dusk \n";

  std::cin >> ans2;

  if (ans2 == 1)
  {
    gryffindor++;
    ravenclaw++;
  }
  else if (ans2 == 2)
  {
    hufflepuff++;
    slytherin++;
  }
  else
  {
    std::cout << "Invalid input \n";
  }

  std::cout << "Q3) Which kind of instrument most pleases your ear? \n \n";
  std::cout << "\t 1) The violin \n";
  std::cout << "\t 2) The trumpet \n";
  std::cout << "\t 3) The piano \n";
  std::cout << "\t 4) The drum \n";

  std::cin >> ans3;

  if (ans3 == 1)
  {
    slytherin++;
  }
  else if (ans3 == 2)
  {
    hufflepuff++;
  }
  else if (ans3 == 3)
  {
    ravenclaw++;
  }
  else if (ans3 == 4)
  {
    gryffindor++;
  }
  else
  {
    std::cout << "Invalid input";
  }

  std::cout << "Q4) Which road tempts you most? \n \n";
  std::cout << "\t 1) The wide, sunny grassy lane \n";
  std::cout << "\t 2) The narrow, dark, lantern-lit alley \n";
  std::cout << "\t 3) The twisting, leaf-strewn path through woods\n";
  std::cout << "\t 4) The cobbled street lined (ancient buldings)\n";

  std::cin >> ans4;

  if (ans4 == 1)
  {
    hufflepuff++;
  }
  else if (ans4 == 2)
  {
    slytherin++;
  }
  else if (ans4 == 3)
  {
    gryffindor++;
  }
  else if (ans4 == 4)
  {
    ravenclaw++;
  }
  else
  {
    std::cout << "Invalid input";
  }

  if (gryffindor > max)
  {
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max)
  {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max)
  {
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if (slytherin > max)
  {
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << max << "\n"
            << house << "!\n";
}