#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int l = 0; l < n - i; l++)
        {
            printf(" ");
        }

        for (int j = 1; j < i * 2; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
