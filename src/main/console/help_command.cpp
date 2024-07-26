#include "help_command.hpp"

HelpCommand::HelpCommand()
{
    keyword = "?";
    aliases.push_back("help");
}

void HelpCommand::run()
{
    vector<ConsoleCommand*>* commands = &group.commands;
    string output = "List of commands:\n";

    for (int i = 0; i < commands->size(); i++)
    {
        string aliases_output = "";

        ConsoleCommand* command = commands->at(i);
        vector<string> aliases = command->aliases;

        for (int i2 = 0; i2 < aliases.size(); i2++)
        {
            aliases_output.append(aliases[i2]);

            if (i2 < aliases.size() - 1)
            {
                aliases_output.append(", ");
            }
        }

        output.append(keyword).append("\t").append(aliases_output).append("\n");
    }

    cout << output;
}
