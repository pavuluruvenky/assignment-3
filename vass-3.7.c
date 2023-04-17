#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char input_string[MAX_SIZE];
    printf("Enter the string: ");
    fgets(input_string, MAX_SIZE, stdin);

    // Remove newline character from the string
    input_string[strcspn(input_string, "\n")] = '\0';

    int sum = 0;

    // Calculate the sum of ASCII values of all characters in the string
    for (int i = 0; i < strlen(input_string); i++) {
        sum += (int)input_string[i];
    }

    printf("Sum of all characters: %d\n", sum);

    return 0;
}
