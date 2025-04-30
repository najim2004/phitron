#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001], str1[1001];
    scanf("%s", str);
    strcpy(str1, str);
    int i = 0;
    int j = strlen(str1) - 1;
    while (i < j)
    {
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
        i++;
        j--;
    }
    if (strcmp(str, str1) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}