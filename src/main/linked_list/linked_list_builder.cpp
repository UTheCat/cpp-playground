#include "linked_list_builder.hpp"
#include "linked_list_node.hpp"

using namespace CppStuff;

// In the corresponding header file, "initial_items" is prefixed with an ampersand (&).
// Adding an ampersand (&) in front of the parameter name
// specifies that a *reference* to some value should be passed.
LinkedListBuilder::LinkedListBuilder(vector<double> &initial_items)
{
    /*
    The previous "next item" pointer.

    This is set to nullptr initially so that the last item in the linked list
    has a terminating pointer.
    */
    LinkedListNode* most_recent_next_item = nullptr;

    for (int i = initial_items.size() - 1; i >= 0; i--)
    {
        LinkedListNode node = LinkedListNode(initial_items[i], most_recent_next_item);

        if (i == 0)
        {
            first_item = node;
        }
    }
}
