#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z')
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    else if (c >= '0' && c <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}