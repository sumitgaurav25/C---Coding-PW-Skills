#include<stdio.h>

int main()

{
    float x;
    int y;

    printf("Enter decimal no ", x);
    scanf("%f", &x);

    y = x;
    float z = x - y;

    printf("the fractional part: %f", z);
    
    return 0;

}