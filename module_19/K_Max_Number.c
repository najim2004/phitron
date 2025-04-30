#include <stdio.h>
#include <limits.h>

int my_max(int a[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }

    int max_in_rest = my_max(a, n, i + 1);
    return (a[i] > max_in_rest) ? a[i] : max_in_rest;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = my_max(a, n, 0);
    printf("%d\n", max);

    return 0;
}
