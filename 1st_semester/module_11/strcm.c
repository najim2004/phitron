#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int c = strcmp(a, b);
    if (c == 0)
    {
        printf("Equal\n");
    }
    else if (c < 0)
    {
        printf("A is smaller\n");
    }
    else
    {
        printf("B is smaller\n");
    }
    return 0;
}