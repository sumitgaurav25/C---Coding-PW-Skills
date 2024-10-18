#include<stdio.h>
int main(){

// even or odd no.
    // int a;
    // printf("enter a no. ");
    // scanf("%d", &a);

    // if(a%2 == 0){
    //     printf("%d is an even no.", a);
    // }
    // else{
    //     printf("%d is an odd no.", a);
    // }

// divisible by 5

    // int a;
    // printf("enter a no. ");
    // scanf("%d", &a);

    // if(a%5 == 0){
    //     printf("%d is divisible by 5", a);
    // }
    // else{
    //     printf("%d is not divisible by 5", a);
    // }

// leap year or not
    // int year;
    // printf("Enter a year: ");
    // scanf("%d", &year);

    // if(year % 400 == 0){
    //     printf("%d is a leap year", year);
    // }
    // else{
    //     if (year % 100 == 0)
    //     {
    //         printf("%d is not a leap year", year);
    //     }
    //     else{
    //         if (year % 4 == 0)
    //         {
    //             printf("%d is a leap year", year);
    //         }
    //         else{
    //             printf("%d is not a leap year", year);
    //         }
    //     }
        
    // }

// absolute value of a number

    int a, b;
    printf("enter a no. ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("%d", a);
    }
    else{
        b = a * (-1);
        printf("%d", b);
    }
    

    return 0;
}