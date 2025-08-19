#include <stdio.h>

int main() {
    int a = 10, b = 15, c;

    // Print original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using third variable
    c = a;  // c = 10
    a = b;  // a = 15
    b = c;  // b = 10

    // Print swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
