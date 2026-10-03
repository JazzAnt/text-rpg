#include <string_view>
#ifndef DIVIDERS_H
#define DIVIDERS_H

namespace Dividers
{
inline constexpr std::string_view divider_1{
    "------------------------------------------------------------------------"};

inline constexpr std::string_view divider_2{
    "========================================================================"};

inline constexpr std::string_view header_resources{
    "============================[ Resources ]==============================="};

inline constexpr std::string_view header_choice{
    "========================[ Enter your Choice ]==========================="};

inline constexpr std::string_view header_destinations{
    "=======================[ Travel Destinations ]=========================="};

inline constexpr std::string_view header_message{
    "==============================[ Message ]==============================="};

} // namespace Dividers

#endif
