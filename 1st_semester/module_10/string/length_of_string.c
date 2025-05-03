#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s", arr);
    int count = 0;
    int len = strlen(arr);
    printf("%d\n", len);
    while (arr[count] != '\0')
    {
        count++;
    }
    printf("%d\n", count);
    return 0;
}
