#include <stdio.h>

long long summation(int arr[], int n)
{
    if (n == 0)
        return 0;
    return arr[n - 1] + summation(arr, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[1000]; // Avoid VLA
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long sum = summation(arr, n);
    printf("%lld\n", sum);
    return 0;
}
