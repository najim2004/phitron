#include <stdio.h>
int my_abs(int n)
{
    if (n < 0)
    {
        return -n;
    }
    return n;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", my_abs(n));
    return 0;
}
