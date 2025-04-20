/*A. Summation
time limit per test2 seconds
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (-109  ≤  Ai  ≤  109).

Output
Print the absolute summation of these numbers.

Examples
Input:
4
7 2 1 3
Output:
13
Input:
3
-1 2 -3
Output:
2
Note
Second Example :

-1 + 2 + -3 = -2 and it absolute is 2 so the answer is 2.*/

#include <stdio.h>

int main()
{
    int n;
    long long sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum < 0)
        printf("%lld", -sum);
    else
        printf("%lld", sum);
    return 0;
}
