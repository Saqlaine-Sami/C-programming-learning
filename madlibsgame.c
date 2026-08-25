#include <stdio.h>
#include <string.h>

int main()
{

    // MAD LIBS GAME

    char adjective1[50] = "";
    char noun1[50] = "";
    char adjective2[50] = "";
    char verb1[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun1, sizeof(noun1), stdin);
    noun1[strlen(noun1) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb1, sizeof(verb1), stdin);
    verb1[strlen(verb1) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    // printf("%s\n", noun1);
    // printf("%s\n", verb1);
    // printf("%s\n", adjective1);
    // printf("%s\n", adjective2);
    // printf("%s\n", adjective3);

    printf("\nToday I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a %s.\n", noun1);
    printf("%s was %s and %s!\n", noun1, adjective2, verb1);
    printf("I was %s!\n", adjective3);

    return 0;
}