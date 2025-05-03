#include <stdio.h>

long long my_factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return (long long)n * my_factorial(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long result = my_factorial(n);
    printf("%lld\n", result); // Fixed format specifier
    return 0;
}
