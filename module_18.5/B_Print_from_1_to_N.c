#include <stdio.h>
void my_loop(int n)
{
    if (n == 0)
        return;
    my_loop(n - 1);
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    my_loop(n);
    return 0;
}