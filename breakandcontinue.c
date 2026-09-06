#include <stdio.h>

int main(){




    // break = Breaks out of a loop or switch statement(Stop)
    // continue = Skips the rest of the code in the loop for the current iteration only(Skip)

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            // break; // exit the loop when i is equal to 5
            continue; // skip the rest of the code in the loop when i is equal to 5
        }
        printf("%d\n", i);
    }



    return 0;
}
