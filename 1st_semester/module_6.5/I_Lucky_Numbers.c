/*I. Lucky Numbers
time limit per test1 second
memory limit per test256 megabytes
A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N
 (10≤N≤99)
.

Output
Print "YES" if the given number is lucky, otherwise print "NO".

Examples
Input:
39
Output:
YES
Input:
64
Output:
NO*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int first_digit = n / 10;
    int second_digit = n % 10;
    if ((first_digit != 0 && second_digit % first_digit == 0) || (second_digit != 0 && first_digit % second_digit == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
