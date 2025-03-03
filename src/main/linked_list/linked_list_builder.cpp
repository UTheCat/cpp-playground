#include <vector>
#include <utility>
#include "linked_list_builder.hpp"
#include "linked_list_node.hpp"

using namespace CppStuff;

template <typename T>
LinkedListBuilder<T>::LinkedListBuilder(std::vector<T> initial_items)
{
    /*
    The previous "next item" pointer.

    This is set to nullptr initially so that the last item in the linked list
    has a terminating pointer.
    */
    LinkedListNode<T> * most_recent_next_item = nullptr;

    nodes_from_vector = {std::move(initial_items)};

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

template <typename T>
void LinkedListBuilder<T>::destroy_nodes_from_vector()
{
    /*
    delete[] (with the square brackets intentionally included) calls the delete operator on all the items in the array/list.
    */
    delete[] nodes_from_vector;
}
