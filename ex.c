#include <stdio.h>

// Function to check if a single number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
}
void checkMultipleNumbers(int arr[], int size) {
    printf("\nChecking multiple numbers:\n");
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", arr[i]);
        if (arr[i] % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    }
}

