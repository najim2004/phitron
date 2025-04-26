#include <stdio.h>
int my_len(char *str) {
    int len = 0;
    while (*str) {
        len++;
        str++;
    }
    return len;
}
int main() {
    char str[100];
    scanf("%s", str);
    printf("%d", my_len(str));
    return 0;
}
