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
        LinkedListNode<T> *next_item;

        /*
        Necessary to put implementation in header file for template classes in order
        to get the linker to work with this class.
        See https://isocpp.org/wiki/faq/templates#separate-template-class-defn-from-decl for more details.
        */
        LinkedListNode()
        {
            val = nullptr;
            next_item = nullptr;
        }
        LinkedListNode(T init_value, LinkedListNode<T> *init_next_item)
        {
            val = init_value;
            next_item = init_next_item;
        }
    };
}

#endif // LINKED_LIST_NODE_H
