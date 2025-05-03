/*E. Count
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Print the summation of its digits.

Input
Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

It's guaranteed that S contains only digits from 0 to 9.

Output
Print the answer required above.

Example
Input:
351
Output:
9
Note
First Test :

3 + 5 + 1 = 9 .

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000001];
    scanf("%s", s);
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        sum += s[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}
