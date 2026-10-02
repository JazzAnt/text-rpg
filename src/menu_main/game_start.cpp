#include "../../include/menu_main/game_start.h"
#include "../../include/constants_str.h"
#include "../../include/inputs.h"

#include <iomanip>
#include <iostream>
#include <string>
#include <string_view>

namespace MenuMain
{
void showTitle()
{
  int padding{6};
  std::cout << "\n" << Constants_str::divider_2;
  std::cout << std::left;
  std::cout << std::setw(padding) << "\n" << "Space Adventure Trader";
  std::cout << "\n" << Constants_str::divider_2;
}

std::string getPlayerName() { return Cin::getString("Enter player name"); }

void welcomePlayer(std::string_view name) { std::cout << "\nWelcome Captain " << name; }
} // namespace MenuMain
