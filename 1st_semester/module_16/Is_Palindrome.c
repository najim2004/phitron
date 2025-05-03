#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int i = 0, j = strlen(str) - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char str[1001];
    scanf("%s", str);
    int result = is_palindrome(str);
    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
