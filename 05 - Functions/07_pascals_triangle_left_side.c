#include<stdio.h>
int factorial(int n){
    int product = 1;
    while (n>0)
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
    int rows;
    printf("enter rows: ");
    scanf("%d", &rows);

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int icj = combination(i,j);
            printf("%d ", icj);
        }
        printf("\n");
    }
    return 0;    
}