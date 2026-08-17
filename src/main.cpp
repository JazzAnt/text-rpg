#include "../include/ctrls_base.h"
#include "../include/display.h"
#include <iostream>
#include <string>
#include <string_view>
int main() {
  // Todo: replace with string
  std::cout << "Enter name ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);

  constexpr std::string_view startPlanet{"Earth"};
  constexpr int startCredits{1000};
  constexpr int startFuel{50};

  showTitle();
  welcome(name);
  showStats(startPlanet, startCredits, startFuel);

  bool playing{true};

  std::string currentPlanet{startPlanet};
  int credits{startCredits};
  int fuel{startFuel};

  while (playing) {
    showControls();
    int choice{getChoice()};
    switch (choice) {
    case 1:
      std::cout << "\nTravelling";
      break;
    case 2:
      std::cout << "\nBuying";
      break;
    case 3:
      std::cout << "\nSelling";
      break;
    case 4:
      std::cout << "\nReporting";
      break;
    case 0:
      std::cout << "\nGoodbye " << name << "!";
      playing = false;
      break;
    default:
      std::cout << "\nInvalid choice!";
      break;
    }
  }
}
