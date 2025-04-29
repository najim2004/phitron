#include <stdio.h>

void my_loop(int arr[], int n)
{
    if (n % 2 == 0)
        printf("%d ", arr[n]);
    if (n == 0)
        return;
    my_loop(arr, n - 1);
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
    my_loop(arr, n - 1);
    return 0;
}