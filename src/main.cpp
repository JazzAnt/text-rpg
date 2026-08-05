#include <iostream>
void show_title();
void welcome(int name);
void show_stats(const char *planet, int credits, int fuel);

int main() {
  // Todo: replace with string
  std::cout << "Enter number ";
  int name{};
  std::cin >> name;

  const char *planet{"Earth"};
  int credits{1000};
  int fuel{50};

  show_title();
  welcome(name);
  show_stats(planet, credits, fuel);
}

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
