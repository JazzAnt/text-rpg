#include "../include/ctrls_base.h"
#include <iostream>

void showControls() {
  std::cout << "\nWhat do you want to do?"
            << "\n1. Travel"
            << "\n2. Buy"
            << "\n3. Sell"
            << "\n4. Profit Report"
            << "\n0. Quit";
}

int getChoice() {
  int choice{};
  std::cout << "\nEnter your choice: ";
  std::cin >> choice;
  return choice;
}
