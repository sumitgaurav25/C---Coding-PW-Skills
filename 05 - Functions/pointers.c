#include<stdio.h>
int main(){
    int a = 5;
    // printf("%d\n", a); //prints the value

    // //to print the location(address)
    // printf("%p\n", &a);  // %p se address print hota hai
    // // address is chosen usually random

    // // to store the address
    // ////int* x = &a;
    // printf("%p\n", x);

    // // ponter ka address
    // printf("%p\n", &x);

    // //retrieve the data store in the address pointer 
    // //is pointing at

    // //x ke ander jis bhi variable ka address store hai uss 
    // //variable ko point karo aur usmein jo pada hai usse dikha do
    // printf("%d\n", *x);



    // int* x;
    // x = &a;

    // //*x is the value of integer where it points

    // printf("%p\n", &a); 
    // printf("%p\n", x); 

    int* x = &a;
    *x = 7;  // redefinition of a without error
    printf("%d", a);
    return 0;
}