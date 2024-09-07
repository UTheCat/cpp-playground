#include "linked_list_builder.hpp"
#include "linked_list_node.hpp"

using namespace CppStuff;

/**
 * @brief Constructs a new LinkedListBuilder initialized with items from a vector.
 * 
 * In the corresponding header file, "initial_items" is prefixed with an ampersand (&).
 * Adding an ampersand (&) in front of the parameter name
 * specifies that a *reference* to some value should be passed.
 * 
 * @tparam T The type of the linked list's items
 * @param initial_items The vector to get the items from
 */
template <typename T>
LinkedListBuilder<T>::LinkedListBuilder(std::vector<T> &initial_items)
{
    /*
    The previous "next item" pointer.

    This is set to nullptr initially so that the last item in the linked list
    has a terminating pointer.
    */
    LinkedListNode<T> * most_recent_next_item = nullptr;

    for (std::size_t i = initial_items.size() - 1; i >= 0; --i)
    {
        LinkedListNode<T> * node = new LinkedListNode<T>(initial_items[i], most_recent_next_item);

        if (i == 0)
        {
            first_item = node;
        }
    }
}
