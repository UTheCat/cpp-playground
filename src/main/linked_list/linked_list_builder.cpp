#include "linked_list_builder.hpp"
#include "linked_list_node.hpp"

using namespace CppStuff;

template <typename T>
LinkedListBuilder<T>::LinkedListBuilder(std::vector<T> &initial_items)
{
    /*
    The previous "next item" pointer.

    This is set to nullptr initially so that the last item in the linked list
    has a terminating pointer.
    */
    LinkedListNode<T> * most_recent_next_item = nullptr;

    nodes_from_vector = std::array<LinkedListNode<T>*, initial_items.size()>;

    for (std::size_t i = initial_items.size() - 1; i >= 0; --i)
    {
        LinkedListNode<T> * node = new LinkedListNode<T>(initial_items[i], most_recent_next_item);
        nodes_from_vector[i] = node;

        if (i == 0)
        {
            first_item = node;
        }
    }
}
