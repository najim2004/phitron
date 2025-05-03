/*I. Palindrome
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output
Print "YES" if the string is palindrome, otherwise print "NO".

Examples
Input:
abba
Output:
YES
Input:
icpcassiut
Output:
NO
Input:
mam
Output:
YES

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
