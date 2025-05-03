#include <stdio.h>
void my_loop(int n)
{
    if (n == 0)
        return;
    if(n==1)
        printf("%d", n);
    else
        printf("%d ", n);
    my_loop(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    my_loop(n);
    return 0;
}