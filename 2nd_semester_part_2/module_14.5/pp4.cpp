#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    queue<int> q;
    stack<int> st;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}