#include <string_view>
#ifndef DISPLAY
#define DISPLAY

void showTitle();
void welcome(std::string_view name);
void showStats(int planetIndex, int credits, int fuel);

#endif
