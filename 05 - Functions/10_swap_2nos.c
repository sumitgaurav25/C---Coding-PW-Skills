#include<stdio.h>
int main(){
    int a,b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter a: ");
    scanf("%d", &b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("a is: %d, b is: %d\n", a,b);
    return 0;
}