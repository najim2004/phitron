#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char s;
    cin >> A >> s >> B;

    if (s == '>' && A > B)
    {
        cout << "Right";
    }
    else if (s == '<' && A < B)
    {
        cout << "Right";
    }
    else if (s == '=' && A == B)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    return 0;
}
