using namespace CppStuff;

#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

namespace CppStuff
{
    /**
     * @brief A linked list node, containing some data and a pointer to the next item in the list
     * 
     */
    template <typename T>
    class LinkedListNode
    {
        public:

        /**
         * @brief Value/data held by this node
         * 
         */
        T val;

        /**
         * @brief Pointer to the next item
         * 
         */
        LinkedListNode<T> * next_item;

        LinkedListNode();
        LinkedListNode(T init_value, LinkedListNode<T> * init_next_item);
    };
}

#endif // LINKED_LIST_NODE_H
