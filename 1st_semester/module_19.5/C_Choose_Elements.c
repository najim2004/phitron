#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    long long res = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] > 0)
        {
            res += a[i];
                }
    }
    printf("%lld\n", res);

    return 0;
}