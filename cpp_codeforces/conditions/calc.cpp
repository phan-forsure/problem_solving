#include <iostream>
using namespace std;

int main()
{
    
    long long int a, b;
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        return 0;
    }

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " % " << b << " = " << a % b << endl;
    return 0;
}
