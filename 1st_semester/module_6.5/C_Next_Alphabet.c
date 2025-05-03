/*C. Next Alphabet
time limit per test1 second
memory limit per test256 megabytes
Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C
.

Output
Print the next letter to C
 in the alphabet.

Example
Input:
a
Output:
b
Note
The next letter to z is a.*/

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if (c == 'z')
    {
        printf("a\n");
    }
    else
    {
        printf("%c\n", c + 1);
    }
    return 0;
}
