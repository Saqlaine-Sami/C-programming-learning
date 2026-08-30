#include <stdio.h>

int main(){

    //switch = An alternative to using many "if-else" statements.
    //         More efficient with fixed integer values
//---------------------------------------------------------------
//     int dayOfWeek = 1;

// if(dayOfWeek == 1){
//     printf("It is Monday");
// }
// else if(dayOfWeek == 2){
//     printf("It is Tuesday");
// }
// else if(dayOfWeek == 3){
//     printf("It is Wednesday");
// }
// else if(dayOfWeek == 4){
//     printf("It is Thursday");
// }
// else if(dayOfWeek == 5){
//     printf("It is Friday");
// }
// else if(dayOfWeek == 6){
//     printf("It is Saturday");
// }
// else if(dayOfWeek == 7){
//     printf("It is Sunday");
// }
// else{
//     printf("Please enter a number (1 - 7)");
// }

//---------------------------------------------------------------

// int dayOfWeek = 0;
char dayOfWeek = '\0';

// printf("Enter a day of the week (1 - 7): ");
// scanf("%d", &dayOfWeek); 

printf("Enter a day of the week (M, T, W, R, F, S, U): ");
scanf(" %c", &dayOfWeek); // Added a space before %c to consume any whitespace

 switch(dayOfWeek){
    // case 1:
    case 'M':
        printf("It is Monday");
        break;

    // case 2:
    case 'T':
        printf("It is Tuesday");
        break;

    // case 3:
    case 'W':
        printf("It is Wednesday");
        break;

    // case 4:
    case 'R':
        printf("It is Thursday");
        break;  

    // case 5:
    case 'F':
        printf("It is Friday");
        break;

    // case 6:
    case 'S':
        printf("It is Saturday");
        break;

    // case 7:
    case 'U':
        printf("It is Sunday");
        break;

    default:
        // printf("Please enter a number (1 - 7)");
        printf("Please enter a character (M, T, W, R, F, S, U)");


 }


    return 0;
}