#include "pointer_command.hpp"

void PointerCommand::run()
{
    string pointer_name = "my_pointer";

    int arbitrary_number = 31;

    int *my_pointer;
    // printf("Created a pointer named", pointer_name, ". Its memory address is", &my_pointer);
    //printf(string("Created a pointer named ").append(pointer_name).append(string(". Its memory address is ")).c_str());
    cout << "Created a pointer named" << pointer_name << ". Its memory address is "
        << my_pointer
        << "\nThis pointer is currently uninitialized so the memory address stored in it is kinda random.\n";

    my_pointer = &arbitrary_number;
    cout << "my_pointer is now storing the address of arbitrary_number. arbitrary_number is located at ";
    cout << my_pointer;
    cout << "\n";

    // Store something at the memory address currently held by my_pointer
    // This works because dereferencing a pointer returns an l-value reference to the object that the pointer is pointing to.
    *my_pointer = 38;
    cout << "The value stored at the address stored by my_pointer is now ";
    cout << arbitrary_number;
    cout << "\n";

    // arbitrary_number in this context is stored on the stack, and will therefore be destroyed once
    // execution of this function reaches the end.
    // In the code, the end of this function is the closing curly brace of this function.
    // Therefore 'delete my_pointer' is unnecessary here.
}

PointerCommand::PointerCommand()
{
    keyword = "pointer";
    aliases.push_back("do stuff with a pointer");
}
