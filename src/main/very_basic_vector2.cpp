#include "very_basic_vector2.hpp"
#include <utility>

using namespace CppStuff;

VeryBasicVector2::VeryBasicVector2(float x, float y)
{
    /*
    These two lines assign an r-value to an l-value.

    In a line of code such as 'int x = 52', 'x' is the l-value
    and '52' is the r-value.
    */
    this->x = x;
    this->y = y;
}

VeryBasicVector2::VeryBasicVector2(const VeryBasicVector2 &other)
{
    /*
    Both of these lines are copying data.

    x is receiving a copy of the float stored at other.x
    y is receiving a copy of the float stored at other.y
    */
    x = other.x;
    y = other.y;
}

VeryBasicVector2::VeryBasicVector2(VeryBasicVector2 &&other)
{
    x = std::move(other.x);
    y = std::move(other.y);
}

VeryBasicVector2 VeryBasicVector2::operator+(const VeryBasicVector2 &other)
{
    return VeryBasicVector2(x + other.x, y + other.y);
}

VeryBasicVector2 &VeryBasicVector2::operator=(VeryBasicVector2 &&other)
{
    // Make sure the r-value reference supplied and the current instance aren't the same object before continuing
    if (&other != this)
    {
        x = std::move(other.x);
        y = std::move(other.y);
    }

    return * this;
}
