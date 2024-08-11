#include <vector>
#include "linked_list_node.hpp"

using namespace std;

#ifndef LINKED_LIST_BUILDER_H
#define LINKED_LIST_BUILDER_H

namespace CppStuff
{
    class LinkedListBuilder
    {
        public:
        LinkedListNode first_item;
        
        // Adding an ampersand (&) in front of the parameter name
        // specifies that a *reference* to some value should be passed.
        LinkedListBuilder(vector<double> &initial_items);
    };
}

#endif // LINKED_LIST_BUILDER_H
