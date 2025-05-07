#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        int freq[26] = {0};
        for (size_t i = 0; i < line.length(); i++)
        {
            if (line[i] >= 'a' && line[i] <= 'z')
            {
                freq[line[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                while (freq[i]--)
                {
                    cout << (char)(i + 'a');
                }
            }
        }
        cout << endl;
    }

    return 0;
}
