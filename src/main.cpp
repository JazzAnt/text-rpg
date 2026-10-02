#include "../include/menu_main/game_controls.h"
#include "../include/menu_main/game_start.h"

#include "../include/ctrls_base.h"
#include "../include/ctrls_trade.h"
#include "../include/ctrls_travel.h"
#include "../include/display.h"
#include <iostream>
#include <string>

int main()
{
  std::string name{};
  constexpr int startPlanet{3};
  constexpr int startCredits{1000};
  constexpr int startFuel{50};
  int currentPlanet{startPlanet};
  int credits{startCredits};
  int fuel{startFuel};

  MenuMain::showTitle();
  name = MenuMain::getPlayerName();
  MenuMain::welcomePlayer(name);

  bool playing = true;
  while (playing)
  {
    MenuMain::showResources(currentPlanet, credits, fuel, 100);
    MenuMain::showControls();
    switch (MenuMain::getControlChoice())
    {
    case 1:
    {
      std::cout << "\nTravelling";
      showTravelControls(currentPlanet);
      int travelTo{cin_getChoice()};
      showTravelMessage(currentPlanet, travelTo);
      currentPlanet = travelTo;
      fuel -= 5;
      break;
    }
    case 2:
    {
      showMarketPrices();
      cin_getChoiceOfProductId();
      cin_getBuyOrSell();
      cin_getTradeQuantity(true);
      break;
    }
    case 3:
    {
      std::cout << "\nUpgrading";
      break;
    }
    case 4:
    {
      std::cout << "\nReporting";
      break;
    }
    case 0:
    {
      std::cout << "\nGoodbye " << name << "!";
      playing = false;
      break;
    }
    default:
    {
      std::cout << "\nInvalid choice!";
      break;
    }
    }
  }
}
