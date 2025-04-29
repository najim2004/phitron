#include <stdio.h>
#include <string.h>

int countVowels(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return 1 + countVowels(s, i + 1);
    }
    else
    {
        return countVowels(s, i + 1);
    }
}

int main()
{
    char str[205];
    fgets(str, 205, stdin);
    int count = countVowels(str, 0);
    printf("%d\n", count);
    return 0;
}