#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string section;
    int math_marks;
    int cls;

    Student(string name, int roll, string section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student najim("Najim", 1, "A", 100, 10);
    Student rahim("Rahim", 2, "B", 90, 10);
    Student karim("Karim", 3, "C", 80, 10);
    if (najim.math_marks > rahim.math_marks && najim.math_marks > karim.math_marks)
        cout << najim.name << endl;
    else if (rahim.math_marks > najim.math_marks && rahim.math_marks > karim.math_marks)
        cout << rahim.name << endl;
    else
        cout << karim.name << endl;
    return 0;
}