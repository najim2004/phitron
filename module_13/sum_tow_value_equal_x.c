#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
            break;
    }
    if (found == 1)
        printf("true");
    else
        printf("false");

    return 0;
}
