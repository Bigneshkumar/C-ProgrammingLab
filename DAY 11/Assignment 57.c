#include <stdio.h>

int main() {
    int n, i, key;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n]; 

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) { 
            printf("Found at Position %d\n", i + 1);
            return 0; 
        }
    }

    printf("Not found\n"); 
    return 0;
}