#ifndef GAME_START_H
#define GAME_START_H

#include <string>
#include <string_view>

namespace MenuMain
{
void showTitle();
std::string getPlayerName();
void welcomePlayer(std::string_view name);
} // namespace MenuMain

#endif // !GAME_START_H
