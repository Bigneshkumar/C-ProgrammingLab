#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int t = 8; 
    int i;

    printf("Fibonacci Series (first %d terms):\n", t);

    
    for (i = 0; i < t; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n"); 
    return 0; 
}