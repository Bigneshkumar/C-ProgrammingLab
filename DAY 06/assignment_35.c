#include <stdio.h>

int main()
{
    int lr, hr, i, j, f = 0;

    printf("Enter lower range: ");
    scanf("%d", &lr);

    printf("Enter higher range: ");
    scanf("%d", &hr);

    for (i = lr; i <= hr; i++)
    {
        if (i < 2)
            continue;

        f = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            printf("%d\n", i);
    }
    return 0;
}