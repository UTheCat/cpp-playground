#include <iostream>
#include <vector>

using namespace std;

#ifndef CONSOLE_COMMAND_H
#define CONSOLE_COMMAND_H

namespace CppStuff
{
    class ConsoleCommand
    {
        public:
        string keyword;
        vector<string> aliases;

        void run();
        void print_aliases();
    };
}

#endif // CONSOLE_COMMAND_H
