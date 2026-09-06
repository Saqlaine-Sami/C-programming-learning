#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // function prototype
bool ageCheck(int age);           // function prototype

// void hello(char name[], int age)
// {
//     printf("Hello %s\n", name);
//     printf("You are %d years old\n", age);
// }

int main()
{

    // function prototype = Provide the compiler w/ information about a function's:
    //                      name, return type, and parameters before its actual definition.
    //                      Enables type checking and allows functions to be used before
    //                      they're defined.
    //                      Improves readability, organization, and helps prevent errors.

    hello("John", 25); // function call

    if (ageCheck(25)) // function call
    {
        printf("You are an adult\n");
    }
    else
    {
        printf("You are not an adult\n");
    }

    return 0;
}
void hello(char name[], int age)
{
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age)
{
    // if (age >= 18)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return age >= 18; // returns true if age is greater than or equal to 18, otherwise false
}