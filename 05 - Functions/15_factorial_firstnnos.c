#include<stdio.h>
int factorial(int a){
    int product = 1;
    while (a>0){
        product = product * a;
        a--;
    }
    return product;
}
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int fact = factorial(i);
        printf("%d ", fact);
    }
    return 0;    
}