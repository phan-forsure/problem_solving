#include <iostream>
using namespace std;

int main()
{
    
    int t, a, b;
    cin >> t;

    if ((t < 1 || t > 10)) {
        return 0;
    }

    for (int i = 0; i < t; i++) {
        cin >> a >> b;

        if ((a < 1 || b < 1 || a > 1000 || b > 1000)) {
            return 0;
        }
        
        if (a > b) {
            cout << '>' << endl;
        } else if (a < b) {
            cout << '<' << endl;
        } else {
            cout << '=' << endl;
        }
    }

    return 0;
}
