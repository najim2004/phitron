#include <stdio.h>

char small_to_capital(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    return c;
}
int main()
{
    char c;
    scanf("%c", &c);
    printf("%c", small_to_capital(c));
    return 0;
}
