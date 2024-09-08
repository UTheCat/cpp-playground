#include "console_command.hpp"
#include "../linked_list/linked_list_node.hpp"
#include "../very_basic_vector2.hpp"

#ifndef LONG_LINKED_LIST_COMMAND_H
#define LONG_LINKED_LIST_COMMAND_H

namespace CppStuff
{
    /**
     * @brief Class that does some performance tests using very long linked lists
     * 
     */
    class LongLinkedListCommand : public ConsoleCommand
    {
        public:

        /**
         * @brief Default constructor.
         * 
         */
        LongLinkedListCommand(std::size_t num_items);
        
        /**
         * @brief Destructor (there can only be one of these per class).
         * 
         */
        ~LongLinkedListCommand();
        
        void run() override;

        private:
        // Consider using LinkedListBuilder once it's more finished
        LinkedListNode<VeryBasicVector2*> * first_item;
        std::size_t num_items;
    };
}

#endif // LONG_LINKED_LIST_COMMAND_H
