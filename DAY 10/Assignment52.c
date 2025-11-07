#include <stdio.h>

int main() 
{
    int i, j, k;
    char ch = 'A';
    for (i = 1; i <= 4; i++) 
    {
        for (k = 4; k > i; k--) 
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++) 
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
