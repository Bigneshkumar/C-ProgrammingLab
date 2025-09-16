#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, nt;
    int s = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    if (n <= 0) {
        printf("0\n");
        return 0;
    }

    if (n >= 1) {
        printf("%d", a);
        s += a;
    }
    
    if (n >= 2) {
        printf(", %d", b);
        s += b;
    }
    
    for (i = 3; i <= n; ++i) {
        nt = a + b;
        printf(", %d", nt);
        s += nt;
        a = b;
        b = nt;
    }

    printf("\nSum of the Fibonacci series is: %d\n", s);

    return 0;
}