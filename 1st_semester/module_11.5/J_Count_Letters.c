/*J. Count Letters
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Determine how many times does each letter occurred in S.

Input
Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

Output
For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

Note: you must print letters in ascending order.

Examples
Input:
aaabbc
Output:
a : 3
b : 2
c : 1
Input:
regff
Output:
e : 1
f : 2
g : 1
r : 1

*/

#include <stdio.h>

int main()
{
    char c;
    int count[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        count[c - 'a']++;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (count[c - 'a'] > 0)
        {
            printf("%c : %d\n", c, count[c - 'a']);
        }
    }

    return 0;
}
