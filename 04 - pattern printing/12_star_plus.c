#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == ((n/2)+1))
        {
            for (int j = 0; j < ((n)); j++)
            {
                printf("*");
            }
            
        }
        else{
            for (int j = (0); j < ((n/2)); j++)
            {
                printf(" ");
            }
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
}