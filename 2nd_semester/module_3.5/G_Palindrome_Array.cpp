#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    reverse(arr2, arr2 + n);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr2[i])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}