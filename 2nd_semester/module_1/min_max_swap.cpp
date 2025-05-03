#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    int a,b;
    cin>> a >> b;
    int min_val = min(a,b);
    int max_val = max(a,b);
    swap(a,b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    cout << "Original values: a = " << min_val << ", b = " << max_val << endl;
    cout << "Minimum: " << min_val << endl;
    cout << "Maximum: " << max_val << endl;
}