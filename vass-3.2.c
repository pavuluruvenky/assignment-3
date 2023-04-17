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
    int num, i, found = 0;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("%d = ", num);

    // Loop through all numbers from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        // If both i and num-i are prime, print the combination
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d + %d\n", i, num - i);
            found = 1;
        }
    }

    // If no combination is found, print a message
    if (!found) {
        printf("No combination of prime numbers found.\n");
    }

    return 0;
}
