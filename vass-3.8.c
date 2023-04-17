#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r) {
    int i;
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i)); // backtrack
        }
    }
}

int main() {
    char input_string[100];
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    // Remove newline character from the input string
    input_string[strcspn(input_string, "\n")] = '\0';

    printf("All possible permutations are:\n");
    permute(input_string, 0, strlen(input_string) - 1);

    return 0;
}
