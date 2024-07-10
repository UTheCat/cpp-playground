#include <stdio.h>
#include <iostream>
#include "src/main/console/console_command.hpp"
#include "src/main/console/exit_command.hpp"
using namespace std;
using namespace CppStuff;

int main(int, char**)
{
    printf("Hello, from cpp-stuff!\n");
    cout << "This is another message." << endl;

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
    }

    return 0;
}
