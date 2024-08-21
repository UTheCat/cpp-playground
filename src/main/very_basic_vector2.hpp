#ifndef VERY_BASIC_VECTOR2_H
#define VERY_BASIC_VECTOR2_H

namespace CppStuff
{
    /**
     * @brief A very basic implementation of Vector2, which conventionally stores two numbers named 'x' and 'y', and lets you do some operations with it.
     * 
     */
    class VeryBasicVector2
    {
        public:
        float x;
        float y;

        VeryBasicVector2();
        VeryBasicVector2(float x, float y);

        VeryBasicVector2 operator+(VeryBasicVector2* other);
    };
}

#endif // VERY_BASIC_VECTOR2_H
