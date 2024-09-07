#include <vector>
#include "linked_list_node.hpp"

#ifndef LINKED_LIST_BUILDER_H
#define LINKED_LIST_BUILDER_H

namespace CppStuff
{
    template <typename T>
    class LinkedListBuilder
    {
        public:
        LinkedListNode<T> * first_item;
        
        // Adding an ampersand (&) in front of the parameter name
        // specifies that a *reference* to some value should be passed.
        LinkedListBuilder(std::vector<T> &initial_items);
    };
}

#endif // LINKED_LIST_BUILDER_H
