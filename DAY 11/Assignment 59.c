#include <stdio.h>

int main() {
    int array[] = {1, 14, 23, 4, 55, 6, 7};
    int n = 7;
    int even_count = 0;
    int odd_count = 0;
    int i;

    for (i = 0; i < n; i++) {
      
        if (array[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Total even numbers: %d\n", even_count);
    printf("Total odd numbers: %d\n", odd_count);
    return 0;
}