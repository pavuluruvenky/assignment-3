#include <stdio.h>

void reverseString(char *str) {
    char *start = str;
    char *end = str;
    char temp;

    // Move the 'end' pointer to the end of the string
    while (*end != '\0') {
        end++;
    }
    end--;

    // Reverse the string by swapping characters using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter any string: ");
    scanf("%s", str);

    printf("The original string is: %s\n", str);

    // Call the function to reverse the string
    reverseString(str);

    printf("The reverse of the string is: %s\n", str);

    return 0;
}
