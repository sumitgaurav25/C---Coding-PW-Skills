#include<stdio.h>

int main()

{
    float p, r, t, simple_interest;

    printf("Enter principle amount: ",p);
    scanf("%f", &p);

    printf("Enter rate: ",r);
    scanf("%f", &r);

    printf("Enter time: ",t);
    scanf("%f", &t);

    simple_interest = (p*r*t)/100;

    printf("simple interest = %f", simple_interest);
    return 0;
}