#include <string>
#ifndef DISPLAY
#define DISPLAY

void show_title();
void welcome(std::string name);
void show_stats(const char *planet, int credits, int fuel);

#endif
