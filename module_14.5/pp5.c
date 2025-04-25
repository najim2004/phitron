#include <stdio.h>

char capital_to_small(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}
int main()
{
    char c;
    scanf("%c", &c);
    printf("%c", capital_to_small(c));
    return 0;
}
