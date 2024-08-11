using namespace CppStuff;

#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

namespace CppStuff
{
    /**
     * @brief A linked list node, containing some data and a pointer to the next item in the list
     * 
     */
    class LinkedListNode
    {
        public:

        /**
         * @brief Value/data held by this node
         * 
         */
        double val;

        /**
         * @brief Pointer to the next item
         * 
         */
        LinkedListNode* next_item;

        LinkedListNode();
        LinkedListNode(double init_value, LinkedListNode* init_next_item);
    };
}

#endif // LINKED_LIST_NODE_H
