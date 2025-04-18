/*Problem Statement

You will be given a non-negative integer N, you need to tell if this number is divisible by 3 or not. If it is divisible by 3 output "YES" otherwise output "NO" without the quotation mark.

Input Format

Input will contain N.
Constraints

0 <= N <= 10^9
Output Format

Output "YES" or "NO" without the quotation mark according to the question.
Sample Input 0

33
Sample Output 0

YES
Sample Input 1

29
Sample Output 1

NO
Sample Input 2

0
Sample Output 2

YES*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    if(n%3 == 0)
        {printf("YES");}
    else
        {printf("NO");}
    return 0;   
}
