#include "help_command.hpp"

HelpCommand::HelpCommand()
{
    keyword = "?";
    aliases.push_back("help");
}

void HelpCommand::run()
{
    vector<ConsoleCommand*>* commands = group->commands;

    cout << "Current list of commands has ";
    cout << to_string(commands->size());
    cout << " commands.\n";

    string output = "List of commands (keyword, aliases):\n";

    for (int i = 0; i < commands->size(); i++)
    {
        string aliases_output = "";

        ConsoleCommand* command = commands->at(i);
        string command_keyword = command->keyword;
        vector<string>* command_aliases = &command->aliases;

        for (int i2 = 0; i2 < command_aliases->size(); i2++)
        {
            aliases_output.append(command_aliases->at(i2));

            if (i2 < command_aliases->size() - 1)
            {
                aliases_output.append(", ");
            }
        }

        output.append(command_keyword).append("\t\t").append(aliases_output).append("\n");
    }

    cout << output;
}
