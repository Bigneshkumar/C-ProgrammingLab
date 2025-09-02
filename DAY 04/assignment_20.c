#include <stdio.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num >= 0 && num == (int)num) {
        printf("%.2f is a whole number.\n", num);
    } else {
        printf("%.2f is NOT a whole number.\n", num);
    }
    return 0;
}