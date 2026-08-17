#include "../include/ctrls_travel.h"
#include <iostream>

void printCurrent() { std::cout << " (current)"; }

void showTravelControls(int currentIndex) {
  std::cout << "\nWhere are you travelling to?";
  std::cout << "\n0. Sun";
  if (currentIndex == 0)
    printCurrent();

  std::cout << "\n1. Mercury";
  if (currentIndex == 1)
    printCurrent();

  std::cout << "\n2. Venus";
  if (currentIndex == 2)
    printCurrent();

  std::cout << "\n3. Earth";
  if (currentIndex == 3)
    printCurrent();

  std::cout << "\n4. Mars";
  if (currentIndex == 4)
    printCurrent();

  std::cout << "\n5. Jupiter";
  if (currentIndex == 5)
    printCurrent();

  std::cout << "\n6. Saturn";
  if (currentIndex == 6)
    printCurrent();

  std::cout << "\n7. Uranus";
  if (currentIndex == 7)
    printCurrent();

  std::cout << "\n8. Neptune";
  if (currentIndex == 8)
    printCurrent();

  std::cout << "\n9. ???";
  if (currentIndex == 9)
    printCurrent();
}

void showTravelMessage(int currentIndex, int targetIndex) {
  if (currentIndex == targetIndex)
    std::cout << "\nYou're already here!";
  else
    std::cout << "\nTravelling from " << currentIndex << " to " << targetIndex;
  // TODO list of planets? So doesn't have to do if else for every
}
