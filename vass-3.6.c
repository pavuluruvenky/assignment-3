#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char string1[MAX_SIZE], string2[MAX_SIZE];
    int char_count1[256] = {0}; // assuming ASCII character set
    int char_count2[256] = {0}; // assuming ASCII character set

    printf("Enter first string: ");
    fgets(string1, MAX_SIZE, stdin);
    printf("Enter second string: ");
    fgets(string2, MAX_SIZE, stdin);

    // Remove newline character from the strings
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    // Check if the lengths of the strings are equal
    if (strlen(string1) != strlen(string2)) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    // Count the frequency of characters in string1
    for (int i = 0; i < strlen(string1); i++) {
        char_count1[(int)string1[i]]++;
    }

    // Count the frequency of characters in string2
    for (int i = 0; i < strlen(string2); i++) {
        char_count2[(int)string2[i]]++;
    }

    // Compare the character counts of string1 and string2
    int is_anagram = 1;
    for (int i = 0; i < 256; i++) {
        if (char_count1[i] != char_count2[i]) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
