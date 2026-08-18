#include "../include/ctrls_trade.h"
#include <iomanip>
#include <ios>
#include <iostream>
#include <string_view>

void showProduct(int itemId, std::string_view itemName, int price,
                 int ownedAmount) {
  int itemWidth{3};
  int nameWidth{20};
  int priceWidth{20};
  int ownedWidth{20};
  std::cout << "\n";
  std::cout << std::left << "| ";
  std::cout << std::setw(itemWidth) << itemId << "| ";
  std::cout << std::setw(nameWidth) << itemName << "| ";
  std::cout << std::right;
  std::cout << std::setw(priceWidth) << price << "| ";
  std::cout << std::setw(ownedWidth) << ownedAmount << "| ";
}
void showMarketPrices() {
  int itemWidth{3};
  int nameWidth{20};
  int priceWidth{20};
  int ownedWidth{20};
  std::cout << std::left << "| ";
  std::cout << std::setw(itemWidth) << "ID" << "| ";
  std::cout << std::setw(nameWidth) << "Item" << "| ";
  std::cout << std::right;
  std::cout << std::setw(priceWidth) << "Price" << "| ";
  std::cout << std::setw(ownedWidth) << "Owned" << "| ";
  std::cout << "\n-------------------------------------------------------------"
               "-----------";
  for (int i = 1; i < 10; ++i) {
    showProduct(i, "placeholder", (i * 10) % 13, 0);
  }
}
int cin_getChoiceOfProductId() {
  std::cout << "\nEnter the ID of the product to trade"
            << "\n(Enter 0 to quit trading)"
            << "\n";
  int choice{};
  std::cin >> choice;
  return choice;
}
int cin_getBuyOrSell() {
  std::cout << "\nEnter 1 to buy"
            << "\nEnter 2 to sell"
            << "\nEnter 0 to cancel transaction"
            << "\n";
  int choice{};
  std::cin >> choice;
  return choice;
}
int cin_getTradeQuantity(bool isBuying) {
  std::cout << "\nEnter amount to " << ((isBuying) ? "buy" : "sell")
            << "\n(Enter 0 to cancel transaction)"
            << "\n";
  int choice{};
  std::cin >> choice;
  return choice;
}
