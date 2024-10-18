#include<stdio.h>

int main()

{
    float radius, area;
    printf("Enter radius of circle: ");
    scanf("%f",&radius);

    area = 3.1415 * radius * radius;

    printf("the area of circle is: %f",area);
    return 0;

}