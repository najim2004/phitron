/*N. Char
time limit per test0.25 seconds
memory limit per test64 megabytes
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
Input
a
Output
A
Input
A
Output
a*/

#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
    {
        x = x - 32;
        printf("%c", x);
    }
    else if (x >= 'A' && x <= 'Z')
    {
        x = x + 32;
        printf("%c", x);
    }
    return 0;
}
