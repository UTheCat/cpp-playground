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
    for (std::size_t i = 0; i < commands->size(); ++i)
    {
        ConsoleCommand* command = commands->at(i);
        if (command->has_keyword(keyword))
        {
            command->run();
            break;
        }
    }
}

ConsoleCommandGroup::ConsoleCommandGroup()
{
    // Allocate a new vector onto the heap,
    // and store its memory address
    // in the commands variable.
    commands = new vector<ConsoleCommand*>();
}

ConsoleCommandGroup::~ConsoleCommandGroup()
{
    // Delete the vector storing the ConsoleCommand instances when
    // this object's destructor is called.
    // 'delete' keyword is used because the vector is allocated on the heap,
    // and the commands variable is storing a pointer to the vector.
    delete commands;

    // We don't want dangling pointers
    commands = nullptr;
}
