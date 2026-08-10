#include "../include/display.h"
#include <iomanip>
#include <iostream>
#include <string>

void show_line(bool double_line) {
  if (double_line) {
    std::cout << "\n==================================";
  } else {
    std::cout << "\n----------------------------------";
  }
}

void show_title() {
  show_line(true);
  std::cout << std::left;
  std::cout << std::setw(6) << "\n" << "Space Adventure Trader";
  show_line(true);
}

void welcome(std::string name) { std::cout << "\nWelcome " << name; }

void show_stats(const char *planet, int credits, int fuel) {
  int width{16};
  std::cout << std::left;
  show_line(false);
  std::cout << std::setw(width) << "\nCurrent Planet" << ": " << planet;
  std::cout << std::setw(width) << "\nCredits" << ": " << credits;
  std::cout << std::setw(width) << "\nFuel" << ": " << fuel << "/100";
  show_line(false);
}
