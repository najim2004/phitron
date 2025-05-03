#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[n + m];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        arr3[n + i] = arr2[i];
    }
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}
