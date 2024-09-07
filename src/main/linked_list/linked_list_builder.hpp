#include <vector>
#include "linked_list_node.hpp"

#ifndef LINKED_LIST_BUILDER_H
#define LINKED_LIST_BUILDER_H

namespace CppStuff
{
    /**
     * @brief Class that helps build a linked list and exposes the first item in the list in a variable.
     * 
     * @tparam T The type of the linked list's items
     */
    template <typename T>
    class LinkedListBuilder
    {
        public:
        
        /**
         * @brief The first item in the linked list
         * 
         */
        LinkedListNode<T> *first_item;

        /**
         * @brief Constructs a new LinkedListBuilder initialized with items from a vector.
         *
         * "initial_items" is prefixed with an ampersand (&) here.
         * Adding an ampersand (&) in front of the parameter name
         * specifies that a *reference* to some value should be passed.
         *
         * @tparam T The type of the linked list's items
         * @param initial_items The vector to get the items from
         */
        LinkedListBuilder(std::vector<T> &initial_items);

        private:
        std::array<LinkedListNode<T>*> items_from_vector;
    };
}

#endif // LINKED_LIST_BUILDER_H
