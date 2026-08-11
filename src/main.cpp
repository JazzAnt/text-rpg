#include "../include/display.h"
#include <iostream>
#include <string>
int main() {
  // Todo: replace with string
  std::cout << "Enter name ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);

  std::string planet{"Earth"};
  int credits{1000};
  int fuel{50};

  showTitle();
  welcome(name);
  showStats(planet, credits, fuel);
}
