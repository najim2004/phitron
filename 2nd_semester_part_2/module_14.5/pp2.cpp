#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    stack<int> st;
    queue<int> q;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "YES" << endl;

    return 0;
}