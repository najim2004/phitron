#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    int max = arr[max_element(arr, arr + 3) - arr];
    int min = arr[min_element(arr, arr + 3) - arr];
    cout << min << " " << max << endl;
    return 0;
}