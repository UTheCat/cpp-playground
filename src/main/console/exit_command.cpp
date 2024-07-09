#include "exit_command.hpp"

ExitCommand::ExitCommand()
{
    keyword = "exit";
    aliases.push_back(string("quit"));
}

void ExitCommand::run()
{
    printf("Goodbye!");
}
