#include "../include/display.h"
#include <iomanip>
#include <iostream>
#include <string>

void showLine(bool doubleLine) {
  if (doubleLine) {
    std::cout << "\n==================================";
  } else {
    std::cout << "\n----------------------------------";
  }
}

void showTitle() {
  int padding{6};
  showLine(true);
  std::cout << std::left;
  std::cout << std::setw(padding) << "\n" << "Space Adventure Trader";
  showLine(true);
}

void welcome(std::string name) { std::cout << "\nWelcome " << name; }

void showStats(std::string planet, int credits, int fuel) {
  int width{16};
  std::cout << std::left;
  showLine(false);
  std::cout << std::setw(width) << "\nCurrent Planet" << ": " << planet;
  std::cout << std::setw(width) << "\nCredits" << ": " << credits;
  std::cout << std::setw(width) << "\nFuel" << ": " << fuel << "/100";
  showLine(false);
}
