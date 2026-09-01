#include <stdio.h>
#include <string.h>
void happyBirthday(char name[], int age)
{
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("You are %d years old!\n", age);
    printf("Happy Birthday to you!\n");
}

int main()
{

    // function = A reusable section of code that can be invoked "called"
    //            Arguments can be sent to a function so that it can use them

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Remove the newline character from the input

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);
    return 0;
}

// printf("Happy Birthday to you!\n");
// printf("Happy Birthday dear [Name]!\n");
// printf("Happy Birthday to you!\n");
// printf("You are [Age] years old!\n");
// printf("Happy Birthday to you!\n");

// printf("Happy Birthday to you!\n");
// printf("Happy Birthday dear [Name]!\n");
// printf("Happy Birthday to you!\n");
// printf("You are [Age] years old!\n");
