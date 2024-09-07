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

        /**
         * @brief Default constructor
         * 
         * @param x 
         * @param y 
         */
        VeryBasicVector2(float x = 0.0F, float y = 0.0F);

        VeryBasicVector2 operator+(VeryBasicVector2 &other);
    };
}

#endif // VERY_BASIC_VECTOR2_H
