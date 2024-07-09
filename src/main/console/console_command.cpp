#include "console_command.hpp"

#include <iostream>

using namespace CppStuff;

bool ConsoleCommand::has_keyword(string keyword_to_check)
{
    if (keyword_to_check.compare(keyword) == 0)
    {
        return true;
    }

    for (int i = 0; i < aliases.size(); i++)
    {
        if (aliases[i].compare(keyword_to_check) == 0)
        {
            return true;
        }
    }

    return false;
}

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
