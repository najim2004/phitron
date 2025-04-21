/*M. Replace MinMax
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.

Example
InputCopy
5
4 1 3 10 8
OutputCopy
4 10 3 1 8
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, min = 0, max = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < a[min])
        {
            min = i;
        }
        if (a[i] > a[max])
        {
            max = i;
        }
    }
    int temp = a[min];
    a[min] = a[max];
    a[max] = temp;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
