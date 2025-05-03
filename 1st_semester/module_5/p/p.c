/*P. First digit !
time limit per test0.25 seconds
memory limit per test64 megabytes
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".

Examples
Input
4569
Output
EVEN
Input
3569
Output
ODD
Note
Second Example :

In 3569 the first digit is 3 and its ODD.*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x / 1000 % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;
}
