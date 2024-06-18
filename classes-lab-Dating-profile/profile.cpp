#include <iostream>
#include "profile.hpp"

// defining Profile constructor
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
{

  // Assiging values to the attributes
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

std::string Profile::view_profile()
{

  std::string bio = "Name: " + name;
  bio = bio + "\nAge: " + std::to_string(age);
  bio += "\nCity: " + city;
  bio += "\nPronouns: " + pronouns;

  std::string hobby = "Hobbies:\n";

  for (std::string i : hobbies)
  {
    hobby = hobby + " - " + i + "\n";
  }

  return bio + "\n" + hobby;
}

void Profile::add_hobby(std::string new_hobby)
{
  hobbies.push_back(new_hobby);
}
