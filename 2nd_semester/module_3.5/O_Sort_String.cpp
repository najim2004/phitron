#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int freq[26] = {0};
    char ch;

    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        freq[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            cout << char(i + 'a');
        }
    }

    cout << endl;
    return 0;
}
