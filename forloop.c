#include <stdio.h>
#include <windows.h>

int main()
{
    // for loop = Repeat some code a limited # of times
    //            for (initialization; condition; increment/decrement/Update)

    for (int i = 10; i>=0; i--)
    {
        Sleep(1000); // pause for 1 second
        printf("%d\n", i);
    }
    printf("Happy New Year!\n");
    return 0;
}