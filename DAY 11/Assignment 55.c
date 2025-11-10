#include <stdio.h> 
int findGCD (int a, int b) {
    if (b == 0) { 
        return a;
    } else {
        return findGCD (b, a % b);
    }
}

int main() {
    int n1 = 48, n2 = 18;
    int gcd_result; 
    gcd_result = findGCD (n1, n2);
    printf("GCD of %d and %d is %d\n", n1, n2, gcd_result); 
    return 0; 
}