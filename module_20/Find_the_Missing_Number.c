#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d;
        long long int m;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long int multiply = (long long int)a * b * c;

        if (multiply == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("1\n");
            }
        }
        else
        {
            if (m % multiply == 0)
            {
                printf("%lld\n", m / multiply);
            }
            else
            {
                printf("%d\n", -1);
            }
        }
    }

    return 0;
}