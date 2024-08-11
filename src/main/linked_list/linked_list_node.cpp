#include "linked_list_node.hpp"

using namespace CppStuff;

LinkedListNode::LinkedListNode()
{
    val = 0.0;
    next_item = nullptr;
}

LinkedListNode::LinkedListNode(double init_value, LinkedListNode* init_next_item)
{
    val = init_value;
    next_item = init_next_item;
}
