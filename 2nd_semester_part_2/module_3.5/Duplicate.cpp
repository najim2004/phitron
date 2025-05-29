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

    vector<int> temp_arr;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (find(temp_arr.begin(), temp_arr.end(), arr[i]) != temp_arr.end())
        {
            flag = true;
            break;
        }
        else
        {
            temp_arr.push_back(arr[i]);
        }
    }
    flag ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}