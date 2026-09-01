#include <stdio.h>
#include <stdbool.h>

// double cube(double num)
// {
//     return num * num * num;
// }

// double square(double num)
// {
//     return num * num;
// }

// bool ageCheck(int age)
// {
//     if (age >= 18)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

int getMax(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{

    // return =  returns a value back to where you called the function

    // double x = square(2.1);
    // double y = square(3.2);
    // double z = square(4.3);

    // printf("%lf\n", x);
    // printf("%lf\n", y);
    // printf("%lf\n", z);

    // double w = cube(2.1);
    // double v = cube(3.2);
    // double u = cube(4.3);

    // printf("%lf\n", w);
    // printf("%lf\n", v);
    // printf("%lf\n", u);

    // int age = 21;

    // if (ageCheck(age))
    // {
    //     printf("You are an adult!\n");
    // }
    // else
    // {
    //     printf("You are not an adult!\n");
    // }

    int max = getMax(10, 20);
    printf("The maximum value is: %d\n", max);

    return 0;
}