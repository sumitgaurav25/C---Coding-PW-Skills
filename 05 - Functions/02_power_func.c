#include<stdio.h>
#include<math.h>
int power(int base, int exp){
    int result = 1;
    while (exp > 0)
    {
        result = result * base;
        exp--;
    }
    return result;    
}

int main(){
    int base;
    printf("enter base: ");
    scanf("%d", &base);

    int exp;
    printf("enter exp: ");
    scanf("%d", &exp);

    int pow = power(base, exp);
    printf("%d", pow);

    return 0;
}