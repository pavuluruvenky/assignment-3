#include <stdio.h>

// Function to find the GCD of two numbers using recursion
int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1; // Base case: if num2 is 0, num1 is the GCD
    } else {
        return gcd(num2, num1 % num2); // Recursively find the GCD
    }
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the gcd() function to find the GCD
    int result = gcd(num1, num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
