#include <stdio.h>

int main() {
    int n, choice;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMenu:\n");
    printf("1. Check if the number is a Buzz number or not\n");
    printf("2. Check if the number is Even or Odd\n");
    printf("3. Check if the number is Positive or Negative\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        if (n % 7 == 0 || n % 10 == 7)
            printf("%d is a Buzz number.\n", n);
        else
            printf("%d is not a Buzz number.\n", n);
    }
    else if (choice == 2) {
        if (n % 2 == 0)
            printf("%d is Even.\n", n);
        else
            printf("%d is Odd.\n", n);
    }
    else if (choice == 3) {
        
        if (n > 0)
            printf("%d is Positive.\n", n);
        else if (n < 0)
            printf("%d is Negative.\n", n);
        else
            printf("The number is Zero.\n");
    }
    else {
        printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }

    return 0;
}
