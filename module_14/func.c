#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int res = sum(x, y);
    printf("Sum of %d and %d is: %d\n", x, y, res);
    return 0;
}
