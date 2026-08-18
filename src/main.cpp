#include "../include/ctrls_base.h"
#include "../include/ctrls_trade.h"
#include "../include/ctrls_travel.h"
#include "../include/display.h"
#include <iostream>
#include <string>
int main() {
  // Todo: replace with string
  std::cout << "Enter name ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);

  constexpr int startPlanet{3};
  constexpr int startCredits{1000};
  constexpr int startFuel{50};

  showTitle();
  welcome(name);

  bool playing{true};

  int currentPlanet{startPlanet};
  int credits{startCredits};
  int fuel{startFuel};

  while (playing) {
    showStats(currentPlanet, credits, fuel);
    showControls();
    int choice{getChoice()};
    switch (choice) {
    case 1: {
      std::cout << "\nTravelling";
      showTravelControls(currentPlanet);
      int travelTo{getChoice()};
      showTravelMessage(currentPlanet, travelTo);
      currentPlanet = travelTo;
      fuel -= 5;
      break;
    }
    case 2: {
      showMarketPrices();
      cin_getChoiceOfProductId();
      cin_getBuyOrSell();
      cin_getTradeQuantity(true);
      break;
    }
    case 3:
      std::cout << "\nUpgrading";
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
