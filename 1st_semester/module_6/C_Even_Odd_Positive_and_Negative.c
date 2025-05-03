/*C. Even, Odd, Positive and Negative
time limit per test1 second
memory limit per test256 megabytes
Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 103) number of values.

Second line contains N numbers (-105 ≤ Xi ≤ 105).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

Example
Input
5
-5 0 -3 -4 12
Output
Even: 3
Odd: 2
Positive: 1
Negative: 3
Note
First Example :

Even Numbers are : 0, -4 , 12

Odd Numbers are : -5 , -3

Positive Numbers are : 12

Negative Numbers are : -5 , -3 , -4*/

#include <stdio.h>

int main()
{
    int n, a, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (a > 0)
        {
            positive++;
        }
        else if (a < 0)
        {
            negative++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}
