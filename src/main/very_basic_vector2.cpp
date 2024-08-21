#include "very_basic_vector2.hpp"

using namespace CppStuff;

VeryBasicVector2::VeryBasicVector2() : VeryBasicVector2((float)0, (float)0) {}

VeryBasicVector2::VeryBasicVector2(float x, float y)
{
    this->x = x;
    this->y = y;
}

VeryBasicVector2 VeryBasicVector2::operator+(VeryBasicVector2 &other)
{
    return VeryBasicVector2(x + other.x, y + other.y);
}
