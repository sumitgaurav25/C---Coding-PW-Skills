#include<stdio.h>

int main()

{
    int a,b,q,r;
    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    // q = a/b;

    // r = a - (b*q); // Divisor * quotient + remainder = dividend 

    // printf("The remainder when %d is divided by %d is: %d", a,b,r);

    r = a % b;

    printf("the remainder is %d", r);
    return 0;
    
}