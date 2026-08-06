#include <iostream>
void show_title() {
  std::cout << "\n----------------------"
               "\nSpace Adventure Trader"
               "\n----------------------";
}

void welcome(int name) { std::cout << "\nWelcome " << name; }

void show_stats(const char *planet, int credits, int fuel) {
  std::cout << "\n---------------------------------";
  std::cout << "\nCurrent Planet: " << planet;
  std::cout << "\nCredits: " << credits;
  std::cout << "\nFuel: " << fuel << "/100";
  std::cout << "\n---------------------------------";
}
