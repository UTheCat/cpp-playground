#include "pointer_command.hpp"

void PointerCommand::run()
{
    string pointer_name = "my_pointer";

    int * my_pointer;
    //printf("Created a pointer named", pointer_name, ". Its memory address is", &my_pointer);
    printf(string("Created a pointer named ").append(pointer_name).append(string(". Its memory address is ")).c_str());
    cout << my_pointer;
    cout << "\n";

    // Store something at the memory address held by my_pointer
    *my_pointer = 38;

    // Give memory back to the system (otherwise we'll end up with a memory leak)
    delete my_pointer;
}

PointerCommand::PointerCommand()
{
    keyword = "pointer";
    aliases.push_back("do stuff with a pointer");
}
