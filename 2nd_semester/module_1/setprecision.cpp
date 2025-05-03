#include <iostream>
using namespace std;
#include <iomanip> // for std::setprecision

int main()
{
    double a = 123.456789;
    cout << "Default precision: " << a << endl;

    // Set precision to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Fixed precision (2): " << a << endl;

    // Set precision to 4 decimal places
    cout << fixed << setprecision(4);
    cout << "Fixed precision (4): " << a << endl;

    // Set precision to 6 decimal places
    cout << fixed << setprecision(6);
    cout << "Fixed precision (6): " << a << endl;

    return 0;
}
