#ifndef VERY_BASIC_VECTOR2_H
#define VERY_BASIC_VECTOR2_H

#include <iostream>

namespace CppStuff
{
    /**
     * @brief A very basic implementation of Vector2, which conventionally stores two numbers named 'x' and 'y', and lets you do some operations with it.
     *
     */
    class VeryBasicVector2
    {
        /// @brief Insertion operator.
        /// @param stream The stream to insert into.
        /// @param vector2 The VeryBasicVector2 whose contents should be written to the stream.
        /// @return A reference to the stream passed in the first parameter.
        friend std::ostream & operator<<(std::ostream & stream, VeryBasicVector2 const & vector2);

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
         * @brief Copy constructor. Ampersand to the left of the parameter named 'other' indicates that an l-value reference should be passed.
         *
         * @param other The VeryBasicVector2 to copy.
         */
        VeryBasicVector2(const VeryBasicVector2 &other);

        /**
         * @brief Move constructor. Double ampersand to the left of the parameter named 'other' indicates that an r-value reference should be passed.
         *
         * @param other The VeryBasicVector2 to take ownership of
         */
        VeryBasicVector2(VeryBasicVector2 &&other);

        /**
         * @brief Move assignment operator.
         * 
         * Ampersand to the right of the first 'VeryBasicVector2' in the method header indicates that a l-value reference to a VeryBasicVector2 should be returned.
         * 
         * @param other 
         * @return VeryBasicVector2 &
         */
        VeryBasicVector2 & operator=(VeryBasicVector2 &&other);

        /**
         * @brief Addition operator overload.
         *
         * @param other Can be an l-value or an r-value
         * @return VeryBasicVector2
         */
        VeryBasicVector2 operator+(const VeryBasicVector2 &other);
    };
}

#endif // VERY_BASIC_VECTOR2_H
