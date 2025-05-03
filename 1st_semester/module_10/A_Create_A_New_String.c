/*A. Create A New String
time limit per test1 second
memory limit per test256 megabytes
Given two strings S and T. Print 2 lines that contain the following in the same order:

Print the length of S and T separated by space.
Print a new string that contains S and T separated by a space.
For more clarification see the example below.

Input
The first line contains a string S (1 ≤ |S| ≤ 103) where |S| is the length of S.

The second line contains a string T (1 ≤ |T| ≤ 103) where |T| is the length of T.

Output
Print the answer required above.

Examples
Input:
LEVEL
ONE
Output:
5 3
LEVEL ONE
Input:
Programming
contest
Output:
11 7
Programming contest

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char strS[1001], strT[1001];
    scanf("%s", strS);
    scanf("%s", strT);
    int lenS = 0, lenT = 0;
    lenS = strlen(strS);
    lenT = strlen(strT);
    printf("%d %d\n", lenS, lenT);
    printf("%s %s\n", strS, strT);
    return 0;
}
