#include <string_view>
#ifndef DIVIDERS_H
#define DIVIDERS_H

// string_views for text dividers. All have \n built in do no need to manually add them.
namespace Dividers
{
inline constexpr std::string_view divider_1{
    "\n------------------------------------------------------------------------"};

inline constexpr std::string_view divider_2{
    "\n========================================================================"};

inline constexpr std::string_view header_resources{
    "\n============================[ Resources ]==============================="};

inline constexpr std::string_view header_choice{
    "\n========================[ Enter your Choice ]==========================="};

inline constexpr std::string_view header_destinations{
    "\n=======================[ Travel Destinations ]=========================="};

inline constexpr std::string_view header_message{
    "\n==============================[ Message ]==============================="};

} // namespace Dividers

#endif
