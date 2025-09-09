#include <stdio.h>

int main() {
    int units;
    double bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        bill = (100 * 5.0) + ((units - 100) * 7.0);
    } else {
        bill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    }

    int choice = (units <= 100) ? 1 : (units <= 200) ? 2 : 3;

    switch (choice) {
        case 1:
            printf("Bill amount for %d units is: %.2lf", units, bill);
            break;
        case 2:
            printf("Bill amount for %d units is: %.2lf", units, bill);
            break;
        case 3:
            printf("Bill amount for %d units is: %.2lf", units, bill);
            break;
    }
    return 0;
}