#include <stdio.h>
#include <stdbool.h>
int main() {

    float price = 10.00;
    bool isStudent = true; //10% discount
    bool isSenior = true; //20% discount

    //student = $9
    //senior = $8
    //student + senior = $7


    if(isStudent){
        printf("You get a student discount of 10%\n");
        price *= 0.9; // Apply a 10% discount
    }

    if(isSenior){
        printf("You get a senior discount of 20%\n");
        price *= 0.8; // Apply a 20% discount
    } 
    printf("The price of a ticket is: $%.2f\n", price);

    return 0;
}