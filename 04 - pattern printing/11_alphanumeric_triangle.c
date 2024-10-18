#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    char ch = 65;

    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            for (int j = 1; j <=i; j++)
            {
                printf("%d", j);
            }            
        }
        else{
            for (int k = 0; k < i; k++)
            {
                printf("%c", ch + k);
            }
            
        }
        printf("\n");
    }
    return 0;
}