#include <stdio.h>
// #include <string.h>
#include <stdbool.h>

int main()
{
    // while loop = Continue some code WHILE the condition remains true
    //              Condition must be true for us to enter the loop

    // while (1 == 1) // infinite loop
    // {
    //     printf("Hello World\n");
    // }

    // int number = 0;

    // while (number <= 0)
    // {
    //     printf("Enter a number greater than 0: ");
    //     scanf("%d", &number);
    // }

    // do
    // {
    //     printf("Enter a number greater than 0: ");
    //     scanf("%d", &number);
    // } while (number <= 0);

    // char name[50] = "";

    // printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin); // safer than scanf for strings
    // name[strlen(name) - 1] = '\0'; // remove newline character from the end of the string

    // while (strlen(name) == 0)
    // {
    //     printf("Please enter a valid name: ");
    //     fgets(name, sizeof(name), stdin);
    //     name[strlen(name) - 1] = '\0'; // remove newline character from the end of the string
    // }

    // printf("Hello %s\n", name);

    bool isRunning = true;
    char response = '\0';

    // while (isRunning)
    // {
    //     printf("You are playing a game\n");
    //     printf("Do you want to continue playing? (Y = yes, N = no): ");
    //     scanf(" %c", &response); // space before %c to consume any leftover whitespace

    //     if (response != 'Y' && response != 'y')
    //     {
    //         isRunning = false;
    //     }

    do
    {
        printf("You are playing a game\n");
        printf("Do you want to continue playing? (Y = yes, N = no): ");
        scanf(" %c", &response); // space before %c to consume any leftover whitespace

        if (response != 'Y' && response != 'y')
        {
            isRunning = false;
        }
        while (isRunning)
            ;

        return 0;
    }