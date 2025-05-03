/*Q. Digits
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the digits of that number from right to left separated by space.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)

Output
For each test case print a single line contains the digits of the number separated by space.

Example
Input:
4
121
39
123456
1200
Output:
1 2 1
9 3
6 5 4 3 2 1
0 0 2 1*/

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int rem;
        do
        {
            rem = n % 10;
            printf("%d ", rem);
            n = n / 10;
        } while (n > 0);
        printf("\n");
    }
    return 0;
}
