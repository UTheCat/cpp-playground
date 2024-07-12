#include <iostream>
#include "console_command.hpp"
using namespace std;
using namespace CppStuff;

namespace CppStuff
{
    class PointerCommand : public ConsoleCommand
    {
        public:
        void run() override;
        PointerCommand();
    };
}
