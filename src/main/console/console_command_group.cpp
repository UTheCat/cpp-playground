#include "console_command_group.hpp"

void ConsoleCommandGroup::run_command(string keyword)
{
    /*
    size_t is recommended for iterating through a list in C++.
    -------------------
    ++i (pre-increment) is used instead of i++ (post-increment)
    because post-increment creates a copy of the variable 'i', increments the copy by 1, and returns the copy.

    This is unlike pre-increment, which only increments 'i' (the original variable in this context) by 1 without creating a copy of the variable.
    */
    for (std::size_t i = 0; i < commands.size(); ++i)
    {
        ConsoleCommand* command = commands.at(i);
        if (command->has_keyword(keyword))
        {
            command->run();
            break;
        }
    }
}

ConsoleCommandGroup::ConsoleCommandGroup() = default;

ConsoleCommandGroup::~ConsoleCommandGroup() = default;
