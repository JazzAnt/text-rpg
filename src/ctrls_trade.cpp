#include "../include/ctrls_trade.h"
#include "../include/constants.h"
#include "../include/constants_str.h"
#include <iomanip>
#include <ios>
#include <iostream>
#include <string_view>

void showProduct(int id, std::string_view item, int price, int stock, int owned)
{
  std::cout << "\n";
  std::cout << std::left << "| ";
  std::cout << std::setw(Constants::width_id) << id << "| ";
  std::cout << std::setw(Constants::width_item) << item << "| ";
  std::cout << std::right;
  std::cout << std::setw(Constants::width_price) << price << " |";
  std::cout << std::setw(Constants::width_stock) << stock << " |";
  std::cout << std::setw(Constants::width_owned) << owned << " |";
}

void showMarketPrices()
{
  std::cout << std::left << "| ";
  std::cout << std::setw(Constants::width_id) << "ID" << "| ";
  std::cout << std::setw(Constants::width_item) << "Item" << "| ";
  std::cout << std::right;
  std::cout << std::setw(Constants::width_price) << "Price" << " |";
  std::cout << std::setw(Constants::width_stock) << "Stock" << " |";
  std::cout << std::setw(Constants::width_owned) << "Owned" << " |";
  std::cout << "\n" << Constants_str::divider_1;
  for (int i = 1; i < 10; ++i)
  {
    showProduct(i, "placeholder", (i * 10) % 13, 0, 0);
  }
}

int cin_getChoiceOfProductId()
{
  std::cout << "\nEnter the ID of the product to trade"
            << "\n(Enter 0 to quit trading)"
            << "\n";
  int choice{};
  std::cin >> choice;
  return choice;
}

int cin_getBuyOrSell()
{
  std::cout << "\nEnter 1 to buy"
            << "\nEnter 2 to sell"
            << "\nEnter 0 to cancel transaction"
            << "\n";
  int choice{};
  std::cin >> choice;
  return choice;
}

int cin_getTradeQuantity(bool isBuying)
{
  std::cout << "\nEnter amount to " << ((isBuying) ? "buy" : "sell")
            << "\n(Enter 0 to cancel transaction)"
            << "\n";
  int choice{};
  std::cin >> choice;
  return choice;
}
