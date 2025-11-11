#include <stdio.h>

int main() {
    char str[] = "level";
    int length = 0;
    int i;
    int is_palindrome = 1;
    
    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("The string \"%s\" is a PALINDROME.\n", str);
    } else {
        printf("The string \"%s\" is NOT a palindrome.\n", str);
    }
    return 0;
}