#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int *b = new int[m];
    for (int i = 0; i < m; i++)
    {
        if (i >= n)
        {
            cin >> b[i];
        }
        else
        {
            b[i] = a[i];
        }
    }
    delete[] a;
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
}