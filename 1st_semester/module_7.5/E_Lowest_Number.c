/*E. Lowest Number
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).

Examples
Input:
3
1 2 3
Output:
1 1
Input:
5
5 6 2 3 2
Output:
2 3*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }
    printf("%d %d\n", min, pos + 1);
    return 0;
}
