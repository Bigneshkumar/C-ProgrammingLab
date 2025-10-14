#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area, perimeter;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;
    s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Perimeter: %f\n", perimeter);
    printf("Area: %f\n", area);

    if (a == b && b == c) {
        printf("It is an equilateral triangle.\n");
    } else {
        printf("It is not an equilateral triangle.\n");
    }

    return 0;
}