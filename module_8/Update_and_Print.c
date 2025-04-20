/*Problem Statement

You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.

Note: Index starts from 0.

Input Format

First line will contain N.
Second line will contain the array A.
Third line will contain X and V.
Constraints

1 <= N <= 10^5
1 <= A[i] <= 100 ; where A[i] are the values of array A.
0 <= X < N
1 <= V <= 100
Output Format

Output the final array in reverse order.
Sample Input 0

5
10 20 30 40 50
1 100
Sample Output 0

50 40 30 100 10
Explanation 0

After updating the value of 1st index, the array will become 10 100 30 40 50.
The reverse order will be 50 40 30 100 10.
Sample Input 1

5
10 20 30 40 50
4 10
Sample Output 1

10 40 30 20 10 */

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
    int x, v;
    scanf("%d %d", &x, &v);
    arr[x] = v;
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
