#include "pointer_command.hpp"

void PointerCommand::run()
{
    string pointer_name = "my_pointer";

    int arbitrary_number = 31;

    int * my_pointer;
    //printf("Created a pointer named", pointer_name, ". Its memory address is", &my_pointer);
    printf(string("Created a pointer named ").append(pointer_name).append(string(". Its memory address is ")).c_str());
    cout << my_pointer;
    cout << "\nThis pointer is currently uninitialized so the memory address stored in it is kinda random.";

    my_pointer = &arbitrary_number;
    printf("my_pointer is now storing the address of arbitrary_number. arbitrary_number is located at ");
    cout << my_pointer;
    cout << "\n";

    // Store something at the memory address currently held by my_pointer
    *my_pointer = 38;
}

PointerCommand::PointerCommand()
{
    keyword = "pointer";
    aliases.push_back("do stuff with a pointer");
}
