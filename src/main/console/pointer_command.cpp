#include "pointer_command.hpp"

void PointerCommand::run()
{
    string pointer_name = "my_pointer";

    int * my_pointer;
    printf("Created a pointer named", pointer_name, ". Its memory address is", &my_pointer);

    // Give memory back to the system (otherwise we'll end up with a memory leak)
    delete my_pointer;
}
