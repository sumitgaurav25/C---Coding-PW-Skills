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

int permutation(int n, int r){
    return factorial(n)/factorial(n-r);
}

int main(){
    int n,r;
    printf("enter n: ");
    scanf("%d", &n);
    printf("enter r: ");
    scanf("%d", &r);

    
    int nPr = permutation(n,r);
    printf("%d", nPr);
    return 0;
}