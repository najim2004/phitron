#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long prefix_sum[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        prefix_sum[i] = temp + (i > 0 ? prefix_sum[i - 1] : 0);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--; // 0-based index
        r--;
        long long sum = prefix_sum[r] - (l > 0 ? prefix_sum[l - 1] : 0);
        cout << sum << endl;
    }

    return 0;
}
