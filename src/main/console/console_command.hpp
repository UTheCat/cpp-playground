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
        
        /// @brief 
        /// @param keyword 
        /// @return Whether or not the given keyword is equal to this command's primary keyword or its aliases
        bool has_keyword(string keyword);
        
        void run();
        void print_aliases();
    };
}

#endif // CONSOLE_COMMAND_H
