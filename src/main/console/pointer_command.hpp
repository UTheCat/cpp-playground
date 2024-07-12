#include <iostream>
#include "console_command.hpp"
using namespace std;
using namespace CppStuff;

#ifndef POINTER_COMMAND_H
#define POINTER_COMMAND_H

namespace CppStuff
{
    class PointerCommand : public ConsoleCommand
    {
        public:
        void run() override;
        PointerCommand();
    };
}

#endif // POINTER_COMMAND_H
