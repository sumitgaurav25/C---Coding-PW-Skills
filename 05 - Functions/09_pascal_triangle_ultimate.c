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
        for (int k = 0; k <= rows - i; k++)
        {
            printf(" ");
        }
         
        int first = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", first);
    
            first = first * (i-j)/(j+1);
            // printf("%d ", icj);
        }
        printf("\n");
    }
    return 0; 
}