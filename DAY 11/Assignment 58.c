#include <stdio.h>

int main()
{
    int array[] = {88, 5, 92, 1, 47, 60};
    int n = 6;
    int max, min, i;

    max = array[0];
    min = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("Max elements is: %d\n", max);
    printf("Min elements is: %d\n", min);

    return 0;
}