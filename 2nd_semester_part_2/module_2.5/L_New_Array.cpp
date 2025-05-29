#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n), arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    vector<int> arr3(n * 2);
    for (int i = 0; i < n * 2; i++)
    {
        if (i < n)
            arr3[i] = arr2[i];
        else
            arr3[i] = arr[i - n];
    }
    for (int i = 0; i < n * 2; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}