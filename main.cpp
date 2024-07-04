#include <stdio.h>
#include <iostream>
using namespace std;

int main(int, char**)
{
    printf("Hello, from cpp-stuff!\n");
    cout << "This is another message." << endl;

    bool should_exit = false;
    while (should_exit == false)
    {
        printf("What would you like to do? (If you would like to exit the program, type 'exit'.)");
        
        string action;
        cin >> action;

        if (action.compare("exit") == 0)
        {
            should_exit = true;
        }
    }

    return 0;
}
