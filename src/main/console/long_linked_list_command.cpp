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
