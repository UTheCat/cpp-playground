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
        
        LinkedListBuilder(vector<double*> &initial_items);
    };
}

#endif // LINKED_LIST_BUILDER_H
