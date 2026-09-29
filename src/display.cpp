#include "../include/display.h"
#include "../include/constants_str.h"
#include <iomanip>
#include <iostream>
#include <string_view>

void showTitle()
{
  int padding{6};
  std::cout << "\n" << Constants_str::divider_2;
  std::cout << std::left;
  std::cout << std::setw(padding) << "\n" << "Space Adventure Trader";
  std::cout << "\n" << Constants_str::divider_2;
}

void welcome(std::string_view name) { std::cout << "\nWelcome " << name; }

void showStats(int planetIndex, int credits, int fuel)
{
  int width{16};
  std::cout << std::left;
  std::cout << "\n" << Constants_str::header_resources;
  std::cout << "\n* " << std::setw(width) << "Current Planet" << ": " << planetIndex;
  std::cout << "\n* " << std::setw(width) << "Credits" << ": " << credits;
  std::cout << "\n* " << std::setw(width) << "Fuel" << ": " << fuel << "/100";
  std::cout << "\n" << Constants_str::divider_1;
}
