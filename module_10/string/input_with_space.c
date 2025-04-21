#include <stdio.h>
#include <string.h>
int main()
{
    char str[15];
    // gets(str);
    fgets(str, 15, stdin);
    printf("%s\n", str);
    return 0;
}
