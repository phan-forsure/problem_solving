#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    char q, s;

    cin >> a >> s >> b >> q >> c;
    
    if (s == '+') {

        if (c == a + b) {
            cout << "Yes" << endl;
        } else {
            cout << a + b << endl;
        }

    } else if (s == '-') {

        if (c == a - b) {
            cout << "Yes" << endl;
        } else {
            cout << a - b << endl;
        }
        
    } else if (s == '*') {

        if (c == a * b) {
            cout << "Yes" << endl;
        } else {
            cout << a * b << endl;
        }
    }

    return 0;
}
