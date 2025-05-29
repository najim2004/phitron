#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<long long int> prefix_sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        prefix_sum[i] = arr[i] + (i == 0 ? 0 : prefix_sum[i - 1]);
    }
    reverse(prefix_sum.begin(), prefix_sum.end());
    for (long long int element : prefix_sum)
    {
        cout << element << " ";
    }

    return 0;
}