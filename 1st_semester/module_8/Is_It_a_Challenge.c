/*Problem Statement

You will be given an integer N. If N is a positive number then print from 1 to N, otherwise print from N to 0.

Note: A positive number is a number that is strictly greater than 0.

Input Format

Input will contain only N.
Constraints

-10^5 <= N <= 10^5
Output Format

Output as asked in the question and don't forget to put a space between the values.
Sample Input 0

5
Sample Output 0

1 2 3 4 5 
Sample Input 1

-4
Sample Output 1

-4 -3 -2 -1 0 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(int i=n;i<=0;i++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
