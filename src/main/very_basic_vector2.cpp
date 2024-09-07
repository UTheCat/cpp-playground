#include "very_basic_vector2.hpp"

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

VeryBasicVector2 VeryBasicVector2::operator+(VeryBasicVector2 &other)
{
    return VeryBasicVector2(x + other.x, y + other.y);
}
