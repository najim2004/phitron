#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (find(arr.begin(), arr.end(), arr[i] + 1) != arr.end() ? true : false)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}