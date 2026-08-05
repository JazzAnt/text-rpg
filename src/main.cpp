#include <iostream>
void welcome(int name);

int main() {
  // Todo: replace with string
  std::cout << "Enter number ";
  int name{};
  std::cin >> name;
  welcome(name);
  return 0;
}

void welcome(int name) { std::cout << "Welcome " << name; }
