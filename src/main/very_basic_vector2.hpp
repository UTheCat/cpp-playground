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
         * @brief Default constructor.
         * 
         * @param x The x-value of the vector (zero by default).
         * @param y The y-value of the vector (zero by default).
         */
        VeryBasicVector2(float x = 0.0F, float y = 0.0F);

        /**
         * @brief Copy constructor.
         * 
         * @param other The VeryBasicVector2 to copy.
         */
        VeryBasicVector2(const VeryBasicVector2 &other);

        VeryBasicVector2 operator+(VeryBasicVector2 &other);
    };
}

#endif // VERY_BASIC_VECTOR2_H
