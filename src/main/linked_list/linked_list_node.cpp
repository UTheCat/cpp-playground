#include "linked_list_node.hpp"

using namespace CppStuff;

template <typename T>
LinkedListNode<T>::LinkedListNode()
{
    val = default;
    next_item = nullptr;
}

template <typename T>
LinkedListNode<T>::LinkedListNode(T init_value, LinkedListNode<T>* init_next_item)
{
    val = init_value;
    next_item = init_next_item;
}
