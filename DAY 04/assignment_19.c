#include <stdio.h>

int main() {
    char toss_result;
    printf("Enter the result of the coin toss (H for Heads, T for Tails): ");
    scanf(" %c", &toss_result);

    if (toss_result == 'H' || toss_result == 'h') {
        printf("The result is Heads.\n");
    } else if (toss_result == 'T' || toss_result == 't') {
        printf("The result is Tails.\n");
    } else {
        printf("Invalid input. Please enter H or T.\n");
    }
    return 0;
}