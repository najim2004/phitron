#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    scanf("%s", s);
    int c[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        c[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c : %d\n", i + 'a', c[i]);
    }
    return 0;
}
