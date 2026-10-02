#ifndef INPUTS_H
#define INPUTS_H

#include <iostream>
#include <string>
#include <string_view>

namespace Cin
{
// Ask user input for an int between [min] and [max] (inclusive) using [message] as the query.
int getInt(int min, int max, std::string_view message);

// Ask user input for a string using [message] as the query.
std::string getString(std::string_view message);
} // namespace Cin

#endif // !INPUTS_H
