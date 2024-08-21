#include "operator_overload_command.hpp"

using namespace CppStuff;

OperatorOverloadCommand::OperatorOverloadCommand(VeryBasicVector2* first_vec, VeryBasicVector2* second_vec)
{
    first_vector = first_vec;
    second_vector = second_vec;
}

void OperatorOverloadCommand::run()
{
    cout << "first_vector is set to (";
    cout << first_vector->x;
    cout << ", ";
    cout << first_vector->y;
    cout << ").";

    cout << "second_vector is set to (";
    cout << second_vector->x;
    cout << ", ";
    cout << second_vector->y;
    cout << ").\nWhen added together, the resulting Vector2 is ";

    VeryBasicVector2 result = *first_vector + *second_vector;
    cout << "(";
    cout << result.x;
    cout << ", ";
    cout << result.y;
    cout << ").\n";
}
