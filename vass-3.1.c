#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int i;
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // If number is divisible by any other number, it's not prime
        }
    }
    return 1; // If the number is not divisible by any other number, it's prime
}

int main() {
    int start, end, i;

    // Input two positive integers
    printf("Enter two positive integers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    // Loop through the given interval and print prime numbers
    for (i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
