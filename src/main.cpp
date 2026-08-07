#include "../include/display.h"
#include <iostream>
int main() {
  // Todo: replace with string
  std::cout << "Enter number ";
  int name{};
  std::cin >> name;

  const char *planet{"Earth"};
  int credits{1000};
  int fuel{50};

  show_title();
  welcome(name);
  show_stats(planet, credits, fuel);
}
