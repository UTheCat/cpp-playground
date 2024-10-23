#include <chrono>
#include <iostream>
#include <string>
#include "long_linked_list_command.hpp"

using namespace CppStuff;

LongLinkedListCommand::LongLinkedListCommand(std::size_t num_items)
{
    this->num_items = num_items;
    keyword = "long linked list";
    aliases.push_back("do something with a very long linked list");

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

void LongLinkedListCommand::run()
{
    /*
    'auto' keyword tells the compiler to guess what the type of this object actually is

    In this case, the type should be std::chrono::time_point<std::chrono::steady_clock>,
    according to https://en.cppreference.com/w/cpp/chrono/steady_clock/now .
    */
    auto start_time = std::chrono::steady_clock::now();

    VeryBasicVector2 total = VeryBasicVector2();
    LinkedListNode<VeryBasicVector2*> * next_item = first_item;
    while (next_item != nullptr)
    {
        /*
        convert to l-value reference to use the data pointed to by next_item->val

        Here, we're assigning an l-value to an l-value, which should be valid C++.
        */
        VeryBasicVector2 & current_vector = *(next_item->val);

        // Add current_vector to total
        total = total + current_vector;
    }

    auto end_time = std::chrono::steady_clock::now();
    std::chrono::duration<double> duration = end_time - start_time;

    std::cout << "The sum of this LongLinkedListCommand instance's "
        << num_items
        << " VeryBasicVector2 instances are "
        << total;
}
