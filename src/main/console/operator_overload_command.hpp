#include <iostream>
#include "console_command.hpp"
#include "../very_basic_vector2.hpp"

using namespace CppStuff;

#ifndef OPERATOR_OVERLOAD_COMMAND_H
#define OPERATOR_OVERLOAD_COMMAND_H

namespace CppStuff
{
    class OperatorOverloadCommand : public ConsoleCommand
    {
        public:
        VeryBasicVector2* first_vector;
        VeryBasicVector2* second_vector;

        OperatorOverloadCommand(VeryBasicVector2* first_vec, VeryBasicVector2* second_vec);

        void run() override;
    };
}

#endif // OPERATOR_OVERLOAD_COMMAND_H
