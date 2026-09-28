#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Pseudo-random = Appear random but are determined by a
    //                 mathematical formula that uses a seed value
    //                 to generate a predictable sequence of numbers.
    //                 advanced: Mersenne Twister or /dev/random
    
    // printf("%d\n", rand()); // generates a pseudo-random number

    srand(time(NULL)); // seed the random number generator with the current time

    // printf("%d\n", rand()); // generates a pseudo-random number between 0 and 99

    int min = 1;
    int max = 6;

    // int randomNum = (rand()%2)+1;

    int randomNumber1 =(rand() % (max - min + 1)) + min; // generates a pseudo-random number between 1 and 6
    int randomNumber2 =(rand() % (max - min + 1)) + min; // generates a pseudo-random number between 1 and 6
    int randomNumber3 =(rand() % (max - min + 1)) + min; // generates a pseudo-random number between 1 and 6

    printf("Random numbers: %d, %d, %d\n", randomNumber1, randomNumber2, randomNumber3);

    


    return 0;
}
