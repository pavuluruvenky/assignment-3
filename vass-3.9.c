#include <stdio.h>

#define MAX_SIZE 100

void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int array1[MAX_SIZE];
    int array2[MAX_SIZE];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of array1: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    // Copy array1 to array2
    copyArray(array1, array2, size);

    printf("Array1: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array1[i]);
    }

    printf("\nArray2: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}
