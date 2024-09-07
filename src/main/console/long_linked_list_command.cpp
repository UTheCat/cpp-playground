#include "long_linked_list_command.hpp"

LongLinkedListCommand::LongLinkedListCommand(std::size_t num_items)
{
    this->num_items = num_items;

    LinkedListNode<VeryBasicVector2*> * next_item = nullptr;
    for (std::size_t i = num_items - 1; i >= 0; --num_items)
    {
        LinkedListNode<VeryBasicVector2*> * node = new LinkedListNode<VeryBasicVector2*>(
            new VeryBasicVector2(
                rand() % 1000 * 0.25F, rand() % 1000 * 0.25F
            ),
            next_item
            );
        
        if (i == 0)
        {
            first_item = node;
        }
    }
}

LongLinkedListCommand::~LongLinkedListCommand()
{
    // We'll need to call delete on both the nodes in the linked list
    // and the VeryBasicVector2 instances as both groups of objects
    // are stored on the heap.
    LinkedListNode<VeryBasicVector2*> * next_item = first_item;
    while (next_item != nullptr)
    {
        LinkedListNode<VeryBasicVector2*> * current_item = next_item;
        next_item = current_item->next_item;

        delete current_item->val;
        delete current_item;
    }
}
