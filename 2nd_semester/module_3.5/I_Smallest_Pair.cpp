#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int smallest = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int sum = arr[i] + arr[j] + (j - i);
                if (sum < smallest)
                {
                    smallest = sum;
                }
            }
        }
        cout << smallest << endl;
    }
    return 0;
}