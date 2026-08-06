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
