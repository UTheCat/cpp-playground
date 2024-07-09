#include "console_command.hpp"

#include <iostream>

using namespace CppStuff;

void ConsoleCommand::run()
{
    printf("Now running", keyword, "\n");
}

void ConsoleCommand::print_aliases()
{
    string aliases_output = "";
    
    for (int i = 0; i < aliases.size(); i++)
    {
        aliases_output.append(aliases[i]);
    }

    printf(string("Aliases: ").append(aliases_output).c_str());
}
