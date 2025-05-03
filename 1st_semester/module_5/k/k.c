/*K. Max and Min
time limit per test0.25 seconds
memory limit per test64 megabytes
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.

Examples
Input
1 2 3
Output
1 3
Input
-1 -2 -3
Output
-3 -1
Input
10 20 -5
Output
-5 20

*/

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min = a;
    int max = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("%d %d", min, max);
    return 0;
}
