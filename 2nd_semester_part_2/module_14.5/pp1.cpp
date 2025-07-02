#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> l;
    void push(int x)
    {
        l.push_back(x);
    }
    int pop()
    {
        if (l.empty())
            return -1;
        int x = l.back();
        l.pop_back();
        return x;
    }
    int top()
    {
        if (l.empty())
            return -1;
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    int n, m;
    MyStack s1, s2;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s1.push(x);
    }
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        s2.push(x);
    }
    if (s1.size() != s2.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!s1.empty() && !s2.empty())
    {
        if (s1.top() != s2.top())
        {
            cout << "NO" << endl;
            return 0;
        }
        s1.pop();
        s2.pop();
    }
    cout << "YES" << endl;

    return 0;
}