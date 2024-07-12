#include "console_command_group.hpp"

void ConsoleCommandGroup::run_command(string keyword)
{
    for (int i = 0; i < commands.size(); i++)
    {
        ConsoleCommand* command = commands[i];
        if (command->has_keyword(keyword))
        {
            command->run();
            break;
        }
    }
}

ConsoleCommandGroup::ConsoleCommandGroup()
{
    commands = vector<ConsoleCommand*>();
}
