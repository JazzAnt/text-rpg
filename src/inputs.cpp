#include <cstdlib>
#include <ios>
#include <iostream>
#include <limits>
#include <string>
#include <string_view>

namespace
{
// Clears the cin buffer. Use after extraction so it removes any excess input.
void clearBuffer() { std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }
// Returns true if extraction failed, false otherwise.
bool clearFailedExtraction()
{
  if (!std::cin) // check if extraction failed
  {
    if (std::cin.eof()) // if the user entered an EOF
    {
      std::exit(0); // shut down the program
    }
    // else handle the failure
    std::cin.clear(); // put cin back to 'normal' operation mode
    clearBuffer();

    return true;
  }
  return false;
}
} // namespace

namespace Cin
{
// Ask user input for an int between [min] and [max] (inclusive) using [message] as the query.
int getInt(int min, int max, std::string_view message)
{
  int value{0};
  while (true)
  {
    std::cout << "\n" << message << ": ";
    std::cin >> value;

    if (clearFailedExtraction())
    {
      std::cout << "\nError: failed to extract user input";
      continue;
    }
    clearBuffer();

    if (value < min || value > max)
    {
      std::cout << "\nError: input must be between " << min << " and " << max << " (inclusive)";
      continue;
    }
    return value;
  }
}

// Ask user input for a string using [message] as the query.
std::string getString(std::string_view message)
{
  std::string value{};
  while (true)
  {
    std::cout << "\n" << message << ": ";
    std::getline(std::cin >> std::ws, value);

    if (clearFailedExtraction())
    {
      std::cout << "\nError: failed to extract user input";
      continue;
    }

    if (value.empty())
    { // if input is empty
      std::cout << "\nError: input is empty.";
      continue;
    }
    return value;
  }
}
} // namespace Cin
