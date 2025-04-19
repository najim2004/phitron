/*F. Multiplication table
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print the maltiplication table of the number from 1 to 12

Input
Only one line containing a number N (1 ≤ N ≤ 50).

Output
Print 12 lines according to the required above.

Examples
Input:
1
Output:
1 * 1 = 1
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1 * 5 = 5
1 * 6 = 6
1 * 7 = 7
1 * 8 = 8
1 * 9 = 9
1 * 10 = 10
1 * 11 = 11
1 * 12 = 12
Input:
2
Output:
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20
2 * 11 = 22
2 * 12 = 24

*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}
