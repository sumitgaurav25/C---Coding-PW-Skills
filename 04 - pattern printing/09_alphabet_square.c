#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    char ch = 65;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", ch + j);
        }
        printf("\n");
    }
    return 0;
    
}