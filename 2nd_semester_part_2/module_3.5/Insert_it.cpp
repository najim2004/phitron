#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    cin >> x;
    v1.insert(v1.begin() + x, v2.begin(), v2.end());
    for (int element : v1)
    {
        cout << element << " ";
    }

    return 0;
}