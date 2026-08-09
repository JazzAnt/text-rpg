#include "../include/display.h"
#include <iostream>
#include <string>

void show_title() {
  std::cout << "\n----------------------"
               "\nSpace Adventure Trader"
               "\n----------------------";
}

void welcome(std::string name) { std::cout << "\nWelcome " << name; }

void show_stats(const char *planet, int credits, int fuel) {
  std::cout << "\n---------------------------------";
  std::cout << "\nCurrent Planet: " << planet;
  std::cout << "\nCredits: " << credits;
  std::cout << "\nFuel: " << fuel << "/100";
  std::cout << "\n---------------------------------";
}
