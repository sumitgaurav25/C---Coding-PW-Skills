#include<stdio.h>
int factorial(int n){
    int product = 1;
    while (n > 0)
    {
        product = product * n;
        n--;
    }
    return product;
}

int combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n,r;
    printf("enter n: ");
    scanf("%d", &n);
    printf("enter r: ");
    scanf("%d", &r);

    
    int comb = combination(n,r);
    printf("%d", comb);
    return 0;
}