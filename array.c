#include<stdio.h>

int main (){

    //array = A fixed-size collection of elements of the same data type
    //        (Similar to a variable,but it holds more than 1 value)

    int numbers[]={10, 20, 30, 40, 50};
    char grades[]={'A', 'B', 'C', 'D', 'F'};
    char name[]="Bro Code";

    // numbers[0]=100;
    // numbers[1]=90;
    // numbers[2]=80;
    // numbers[3]=70;
    // numbers[4]=60;

    // printf("%d",numbers[0]);
    // printf("%d",numbers[1]);
    // printf("%d",numbers[2]);
    // printf("%d",numbers[3]);
    // printf("%d",numbers[4]);

    int size = sizeof(numbers) / sizeof(numbers[0]);
    for(int i =0; i<size;i++ ){
        // printf("%c",name[i]);
        printf("%d",numbers[i]);
    }




    return 0;
}