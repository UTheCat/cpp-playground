#include <stdio.h>
#include <iostream>
#include <vector>
#include "src/main/console/console_command.hpp"
#include "src/main/console/console_command_group.hpp"
#include "src/main/console/exit_command.hpp"
#include "src/main/console/help_command.hpp"
#include "src/main/console/pointer_command.hpp"
using namespace std;
using namespace CppStuff;

int main(int, char**)
{
    printf("Hello, from cpp-stuff!\n");
    cout << "This is another message." << endl;

    ConsoleCommandGroup command_group = ConsoleCommandGroup();
    vector<ConsoleCommand*>* commands = &command_group.commands;

    PointerCommand pointer_command = PointerCommand();
    commands->push_back(&pointer_command);

    HelpCommand help_command = HelpCommand();
    commands->push_back(help_command);

    bool should_exit = false;
    ExitCommand exit_command = ExitCommand();
    while (should_exit == false)
    {
        printf("What would you like to do? (If you would like to exit the program, type 'exit'.)\n");
        
        string action;
        cin >> action;

        if (exit_command.has_keyword(action))
        {
            exit_command.run();
            should_exit = true;
        }
        else
        {
            command_group.run_command(action);
        }
    }

    return 0;
}
