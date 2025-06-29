#include <bits/stdc++.h>
using namespace std;

void printList(const list<int> &l)
{
    for (const auto &elem : l)
    {
        cout << elem << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l;

    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        l.push_back(x);
    }

    l.sort();
    l.unique();
    printList(l);

    return 0;
}