#include <stdio.h>

int main() {
    int a = 10, b = 15;

    // Print original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without using a third variable
    a = a + b;  // a = 10 + 15 = 25
    b = a - b;  // b = 25 - 15 = 10
    a = a - b;  // a = 25 - 10 = 15

    // Print swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
