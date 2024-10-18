#include<stdio.h>
int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return a,b;
}

int main(){
    int a,b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter a: ");
    scanf("%d", &b);
    int *x = &a;
    int *y = &b;
    
    swap(&a,&b);

    printf("a is: %d, b is: %d\n", *x,*y);
    return 0;
}