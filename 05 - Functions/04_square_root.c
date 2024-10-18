#include <math.h>
#include <stdio.h>

int main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    
    // Check if the input is non-negative
    if (a < 0) {
        printf("Error: Cannot compute the square root of a negative number.\n");
        return 1; // Return an error code
    }

    double root = sqrt(a); // Store the result as a double
    printf("The square root of %d is: %.2f\n", a, root); // Format the output to 2 decimal places
    
    return 0;
}
