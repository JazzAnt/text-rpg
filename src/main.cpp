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

  while (playing) {
    std::cout << "\n"
              << "\nWhat do you want to do?"
              << "\n1. Travel"
              << "\n2. Buy"
              << "\n3. Sell"
              << "\n4. Profit Report"
              << "\n0. Quit"
              << "\n"
              << "\nEnter your choice: ";

    int choice{0};
    std::cin >> choice;
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
