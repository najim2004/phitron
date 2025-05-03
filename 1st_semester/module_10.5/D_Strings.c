/*D. Strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A + B).
The two strings separated by a single space respectively, after swapping their first character.
For more clarification see the example below.

Input
The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

Output
Print the answer required above.

Example
Input:
abcd
ef
Output:
4 2
abcdef
ebcd af
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char strA[11], strB[11];
    scanf("%s \n%s", strA, strB);
    int len1 = strlen(strA);
    int lenB = strlen(strB);
    printf("%d %d\n", len1, lenB);
    printf("%s%s\n", strA, strB);
    char temp = strA[0];
    strA[0] = strB[0];
    strB[0] = temp;
    printf("%s %s\n", strA, strB);
    return 0;
}
