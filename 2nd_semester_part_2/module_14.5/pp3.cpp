#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    stack<int> st, st1;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        int x = st.top();
        st.pop();
        st1.push(x);
    }
    while (!st1.empty())
    {
        cout << st1.top() << " ";
        st1.pop();
    }
    return 0;
}