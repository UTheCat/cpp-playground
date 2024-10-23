#include <iostream>
#include <vector>
#include "console_command.hpp"

using namespace std;
using namespace CppStuff;

#ifndef CONSOLE_COMMAND_GROUP_H
#define CONSOLE_COMMAND_GROUP_H

namespace CppStuff
{
    class ConsoleCommandGroup
    {
        public:
        vector<ConsoleCommand*> commands;

        void run_command(string keyword);

        ConsoleCommandGroup();
        ~ConsoleCommandGroup();
    };
}

#endif // CONSOLE_COMMAND_GROUP_H
