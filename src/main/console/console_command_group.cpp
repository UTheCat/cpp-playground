#include "console_command_group.hpp"

void ConsoleCommandGroup::run_command(string keyword)
{
    for (std::size_t i = 0; i < commands->size(); i++)
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
