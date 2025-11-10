#include <stdio.h>

int sum_first_even(int n) {
    int sum = 0;
    int i; 

    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i);
    }

    return sum;
}

int main() {
    int num_terms = 10;
    int r;

    r = sum_first_even(num_terms);

    printf("Sum of the first %d even natural numbers is %d\n", num_terms, r);

    return 0;
}