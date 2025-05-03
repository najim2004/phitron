#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i < (2 * n); i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int l = 1; l <= k; l++)
        {
            printf("*");
        }
        if (i < n)
        {
            s--;
            k = k + 2;
        }
        else
        {
            s++;
            k = k - 2;
        }
        printf("\n");
    }
    return 0;
}