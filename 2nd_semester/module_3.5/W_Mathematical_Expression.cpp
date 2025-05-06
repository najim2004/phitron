#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    switch (S)
    {
    case '+':
        if (A + B == C)
            cout << "Yes";
        else
        {
            int result = A + B;
            cout << result;
        }
        break;
    case '-':
        if (A - B == C)
            cout << "Yes";
        else
        {
            int result = A - B;
            cout << result;
        }
        break;
    case '*':
        if (A * B == C)
            cout << "Yes";
        else
        {
            int result = A * B;
            cout << result;
        }
        break;
    default:
        break;
    }
    return 0;
}