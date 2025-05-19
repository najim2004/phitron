#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5}; // type 5
    cout << "Before replace: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // Replace the first 3 elements with 10
    replace(v.begin(), v.begin() + 3, v[0], 10);
    cout << "After replace: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // Replace all occurrences of 2 with 20
    replace(v.begin(), v.end(), 2, 20);
    cout << "After replacing 2 with 20: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}