#include "console_command.hpp"
#include "linked_list_builder.hpp"
#include "very_basic_vector2.hpp"

#ifndef LONG_LINKED_LIST_COMMAND_H
#define LONG_LINKED_LIST_COMMAND_H

namespace CppStuff
{
    /**
     * @brief Class that does some performance tests using very long linked lists
     * 
     */
    class LongLinkedListCommand : ConsoleCommand
    {
        public:

        /**
         * @brief Default constructor.
         * 
         */
        LongLinkedListCommand();
        
        /**
         * @brief Destructor (there can only be one of these per class).
         * 
         */
        ~LongLinkedListCommand();
        
        void run() override;

        private:
        LinkedListBuilder<VeryBasicVector2> linked_list_builder;
    };
}

#endif // LONG_LINKED_LIST_COMMAND_H
