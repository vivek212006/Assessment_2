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
int main() {
    int choice, num, count;
    
    printf("=== Even or Odd Checker ===\n");
    printf("1. Check single number\n");
    printf("2. Check multiple numbers\n");
    printf("3. Interactive input\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            checkEvenOdd(num);
            break;
	    {
                int numbers[] = {12, 7, 25, 18, 33, 44, 9, 100};
                int size = sizeof(numbers) / sizeof(numbers[0]);

                printf("Predefined numbers: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", numbers[i]);
                }
                printf("\n");

                checkMultipleNumbers(numbers, size);
            }
            break;
	    printf("How many numbers do you want to check? ");
            scanf("%d", &count);

            printf("Enter %d numbers:\n", count);
            for (int i = 0; i < count; i++) {
                printf("Number %d: ", i + 1);
                scanf("%d", &num);
                checkEvenOdd(num);
            }
            break;
