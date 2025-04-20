/*Problem Statement

You will be given a positive integer N. You need to print "I Want More Assignments" N times without the quotation mark. Also print from 1 to N with it. See the sample input output for more clarifications.

Input Format

Input will contain only N.
Constraints

1 <= N <= 10^5
Output Format

Output "I Want More Assignments" N times along with 1 to N and don't forget to print new line after it.
Sample Input 0

5
Sample Output 0

1. I Want More Assignments
2. I Want More Assignments
3. I Want More Assignments
4. I Want More Assignments
5. I Want More Assignments
Sample Input 1

3
Sample Output 1

1. I Want More Assignments
2. I Want More Assignments
3. I Want More Assignments*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d. I Want More Assignments\n", i);
    }
    return 0;
}
