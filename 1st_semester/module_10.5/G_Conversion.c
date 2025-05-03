/*G. Conversion
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
Input
Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

Output
Print the string after the conversion.

Example
Input:
happy,NewYear,enjoy
Output:
HAPPY nEWyEAR ENJOY*/

#include <stdio.h>

int main()
{
    char str[100001];
    int i = 0;
    char ch;
    scanf("%s", str);
    while (str[i] != '\0')
    {
        ch = str[i];
        if (ch == ',')
        {
            printf(" ");
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("%c", ch - 32);
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            printf("%c", ch + 32);
        }
        else
        {
            printf("%c", ch);
        }
        i++;
    }
    return 0;
}
