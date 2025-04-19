/*D. Ali Baba and Puzzles
time limit per test1 second
memory limit per test256 megabytes
One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
) between the other three numbers; so that each operator is used only once.

a□b□c=d
Can you solve this tricky puzzle for him?
Input
Only one line containing four numbers a
, b
, c
 and d
 (−109≤a,b,c≤109
),(−1018≤d≤1018
).

Output
Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

Examples
Input:
3 4 5 23
Output:
YES
Input:
9 5 3 7
Output:
YES
Input:
1 2 3 1
Output:
NO

*/

#include <stdio.h>

int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if ((a + b - c == d) || (a + b * c == d) || (a - b + c == d) || (a - b * c == d) || (a * b + c == d) || (a * b - c == d))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
