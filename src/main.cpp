#include "../include/display.h"
#include <iostream>
#include <string>
int main() {
  // Todo: replace with string
  std::cout << "Enter name ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);

  const char *planet{"Earth"};
  int credits{1000};
  int fuel{50};

  show_title();
  welcome(name);
  show_stats(planet, credits, fuel);
}
