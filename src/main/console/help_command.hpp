#include <iostream>
#include "console_command.hpp"
#include "console_command_group.hpp"
using namespace std;

#ifndef HELP_COMMAND_H
#define HELP_COMMAND_H

namespace CppStuff
{
    class HelpCommand : public ConsoleCommand
    {
        public:
        ConsoleCommandGroup* group;

        void run() override;
        HelpCommand();
    };
}

#endif // HELP_COMMAND_H
