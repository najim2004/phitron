#include <stdio.h>
void my_loop(int n)
{
    if (n == 0)
        return;
    printf("I love Recursion\n");
    my_loop(n - 1);
}
int main()
{
    int n = 5;
    scanf("%d", &n);
    my_loop(n);
    return 0;
}