/*Problem Statement

You will be given a non-negative integer N, you need to print all numbers from 1 to N that are divisible by both 3 and 7.

Input Format

Input will contain N.
Constraints

21 <= N <= 10000
Output Format

Output all numbers from 1 to N that are divisible by both 3 and 7. Don't forget to print a new line after every number.
Sample Input 0

30
Sample Output 0

21
Sample Input 1

50
Sample Output 1

21
42
Sample Input 2

100
Sample Output 2

21
42
63
84*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }   
    return 0;
}
