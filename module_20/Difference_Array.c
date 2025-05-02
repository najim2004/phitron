#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int A[n], B[n], C[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            int difference = A[i] - B[i];
            if (difference < 0)
            {
                C[i] = -difference;
            }
            else
            {
                C[i] = difference;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }
    return 0;
}