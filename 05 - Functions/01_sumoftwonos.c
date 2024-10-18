#include<stdio.h>
int sum_func(int a, int b){
    return a + b;
}

int main(){
    int a = 5;
    int b = 6;
    int sum = sum_func(a,b);
    printf("%d\n", sum);
    return 0;

}