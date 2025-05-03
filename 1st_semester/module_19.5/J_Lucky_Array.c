#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++)
    {
        if (arr[0] == arr[i])
        {
            count++;
        }
    }
    if (count % 2 == 0)
        printf("Unlucky");
    else
        printf("Lucky");
    return 0;
}