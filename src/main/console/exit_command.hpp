#include <iostream>

#include "console_command.hpp"

using namespace std;
using namespace CppStuff;

#ifndef EXIT_COMMAND_H
#define EXIT_COMMAND_H

namespace CppStuff
{
    class ExitCommand : public ConsoleCommand
    {
        public:
        ExitCommand();

        void run() override;
    };
}

#endif // EXIT_COMMAND_H
