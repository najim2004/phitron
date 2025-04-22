/*C. Compare
time limit per test1 second
memory limit per test256 megabytes
Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.

Example
Input:
acm
acpc
Output:
acm
Note
For more information visit Lexicographical order: https://en.wikipedia.org/wiki/Lexicographical_order*/

#include <stdio.h>
#include <string.h>
int main()
{
    char x[21], y[21];
    scanf("%s %s", x, y);

    if (strcmp(x, y) < 0)
    {
        printf("%s\n", x);
    }
    else
    {
        printf("%s\n", y);
    }
    return 0;
}
