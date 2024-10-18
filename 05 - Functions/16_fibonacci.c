#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a = 0, b = 1;  // Initial two Fibonacci numbers
    if (n >= 0) {
        printf("%d ", a);  // Print the first Fibonacci number
    }
    if (n >= 1) {
        printf("%d ", b);  // Print the second Fibonacci number
    }
    
    for (int i = 2; i <= n; i++) {
        int sum = a + b;  // Calculate the next Fibonacci number
        printf("%d ", sum); // Print the next Fibonacci number
        a = b;  // Move to the next two Fibonacci numbers
        b = sum;
    }
    
    printf("\n"); // Print a newline at the end
    return 0;
}
