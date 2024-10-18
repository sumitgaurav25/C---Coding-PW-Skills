#include <stdio.h>
int min(int a, int b){
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
}

int gcd(int a, int b){
    int hcf;
    //for (int i = 1; i <= min(a,b); i++)
    for (int i = min(a,b); i >= 1; i--)
    {
        if (a%i == 0 && b%i == 0)
        {
            hcf = i;
            break;
        }     
    }
    return hcf;
    
}
int main() {
    int n, m;
    printf("Enter 1st number: ");
    scanf("%d", &n);

    printf("Enter 2nd number: ");
    scanf("%d", &m);

    int hcf = gcd(n,m);
    printf("%d", hcf);
    return 0;    
}
