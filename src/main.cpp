#include "../include/display.h"
#include <iostream>
#include <string>
int main() {
  // Todo: replace with string
  std::cout << "Enter name ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);

  const std::string startPlanet{"Earth"};
  constexpr int startCredits{1000};
  constexpr int startFuel{50};

  showTitle();
  welcome(name);
  showStats(startPlanet, startCredits, startFuel);
}
