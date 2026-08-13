#include <string_view>
#ifndef DISPLAY
#define DISPLAY

void showTitle();
void welcome(std::string_view name);
void showStats(std::string_view planet, int credits, int fuel);

#endif
