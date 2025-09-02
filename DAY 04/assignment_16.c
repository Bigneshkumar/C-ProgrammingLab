#include <stdio.h>

int main() {
    int roll_number;
    printf("Enter the roll number: ");
    scanf("%d", &roll_number);

    if (roll_number == 100) {
        printf("Roll 100 is present.\n");
    }
    
    return 0;
}