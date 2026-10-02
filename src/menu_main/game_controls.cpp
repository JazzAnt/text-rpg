#include "../../include/menu_main/game_controls.h"
#include "../../include/constants.h"
#include "../../include/constants_str.h"
#include "../../include/inputs.h"
#include <iomanip>

#include <iostream>

namespace MenuMain
{

void showResources(int planetIndex, int credits, int fuel, int maxFuel)
{
  std::cout << std::left;
  std::cout << "\n" << Constants_str::header_resources;
  std::cout << "\n* " << std::setw(Constants::width_resources) << "Current Planet" << ": "
            << planetIndex;
  std::cout << "\n* " << std::setw(Constants::width_resources) << "Credits" << ": " << credits;
  std::cout << "\n* " << std::setw(Constants::width_resources) << "Fuel" << ": " << fuel << "/"
            << maxFuel;
  std::cout << "\n" << Constants_str::divider_1;
}

void showControls()
{
  std::cout << "\nWhat do you want to do?"
            << "\n1. Travel"
            << "\n2. Trade"
            << "\n3. Upgrade"
            << "\n4. Profit Report"
            << "\n0. Quit";
}

int getControlChoice() { return Cin::getInt(0, 4, "Enter choice"); }

} // namespace MenuMain
