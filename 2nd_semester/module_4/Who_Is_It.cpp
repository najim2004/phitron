#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.total_marks;
        cin >> b.id >> b.name >> b.section >> b.total_marks;
        cin >> c.id >> c.name >> c.section >> c.total_marks;
        Student best = a;

        if (b.total_marks > best.total_marks ||
            (b.total_marks == best.total_marks && b.id < best.id))
        {
            best = b;
        }

        if (c.total_marks > best.total_marks ||
            (c.total_marks == best.total_marks && c.id < best.id))
        {
            best = c;
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.total_marks << endl;
    }
    return 0;
}