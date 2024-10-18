#include<stdio.h>
int main(){
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    float pi = 3.1413;
    area = pi * radius * radius;

    printf("the area is: %f", area);

    return 0;
}