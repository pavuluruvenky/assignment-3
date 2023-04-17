#include <stdio.h>

// Function to find the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Function to find the LCM of two numbers
int lcm(int a, int b) {
    // Formula to find LCM: LCM(a, b) = (a * b) / GCD(a, b)
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the lcm function to find the LCM of num1 and num2
    int result = lcm(num1, num2);

    printf("LCM of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
