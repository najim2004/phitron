#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5}; // type 5
    // find(v.begin(), v.end(), 3) != v.end() ? cout << "Found" : cout << "Not Found";
    // cout << endl;
    auto i = find(v.begin(), v.end(), 3);
    if (i != v.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}