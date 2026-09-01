#include <stdio.h>

int result = 0; // Global Scope (Hard to degug)

int add(int a, int b)
{
    int result = a + b;
    return result; // Local Scope (Easy to debug)
}

int subtract(int a, int b)
{
    int result = a - b;
    return result; // Local Scope (Easy to debug)
}
int main()
{
    // variable scope = Refers to where a variable is recognized and accessible.
    //                  Variables can share the same name if
    //                  they are in different scopes {}

    // int result = add(5, 10);
    // printf("The sum is: %d\n", result);

    int a = 20;
    int b = 10;

    int result = subtract(a, b);
    printf("The difference is: %d\n", result);

    return 0;
}