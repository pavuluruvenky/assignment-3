#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char input_string[MAX_SIZE];
    printf("Enter a string: ");
    fgets(input_string, MAX_SIZE, stdin);

    int char_count[256] = {0}; // assuming ASCII character set

    // Count the frequency of each character in the input string
 for(int i=0;i<strlen(input_string);i++) {
        char_count[(int)input_string[i]]++;
    }

    char max_char;
    int max_freq = 0;

    // Find the character with the highest frequency
    for (int i = 0; i < 256; i++) {
        if (char_count[i] > max_freq) {
            max_freq = char_count[i];
            max_char = (char)i;
        }
    }

    printf("Max repeated character in the string = %c\n", max_char);
    printf("It occurs %d times\n", max_freq);

    return 0;
}
