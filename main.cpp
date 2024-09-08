#include <stdio.h>
#include <iostream>
#include <vector>
#include "src/main/console/console_command.hpp"
#include "src/main/console/console_command_group.hpp"
#include "src/main/console/exit_command.hpp"
#include "src/main/console/help_command.hpp"
#include "src/main/console/long_linked_list_command.hpp"
#include "src/main/console/operator_overload_command.hpp"
#include "src/main/console/pointer_command.hpp"
#include "src/main/very_basic_vector2.hpp"

using namespace CppStuff;

int main(int, char**)
{
    printf("Hello, from cpp-stuff!\n");
    std::cout << "This is another message." << std::endl;

    ConsoleCommandGroup command_group = ConsoleCommandGroup();
    std::vector<ConsoleCommand*>* commands = command_group.commands;

    // Initialize a native, C-style array of ints with the initial value of the ints being 0
    int example_c_array[25] = {0};
    cout << "Value of int stored at index 12 of example_c_array is ";
    cout << to_string(example_c_array[12]);
    cout << "\n";

    PointerCommand pointer_command = PointerCommand();
    commands->push_back(&pointer_command);

    HelpCommand help_command = HelpCommand();
    help_command.group = &command_group;
    commands->push_back(&help_command);

    VeryBasicVector2 first_vec = VeryBasicVector2((float)3.5, (float)6.8);
    VeryBasicVector2 second_vec = VeryBasicVector2((float)45.9, (float)17.2);
    OperatorOverloadCommand operator_overload_command = OperatorOverloadCommand(
        &first_vec, &second_vec
    );
    commands->push_back(&operator_overload_command);

    //LongLinkedListCommand long_linked_list_command = LongLinkedListCommand(4600);
    //commands->push_back(&long_linked_list_command);

    bool should_exit = false;
    ExitCommand exit_command = ExitCommand();
    while (should_exit == false)
    {
        printf("\nWhat would you like to do? (If you would like to exit the program, type 'exit'.)\n");
        
        std::string action;
        //cin >> action;
        std::getline(cin, action);

        // Insert newline so it's more clear which lines contain user input
        std::cout << "\n";

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
