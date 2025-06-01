#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a >= 100 && b <= 999) {
        int a_prod = (a % 10) + ((a / 10) % 10) + ((a / 10) / 10);
        int b_prod = (b % 10) + ((b / 10) % 10) + ((b / 10) / 10);

        if (a_prod > b_prod) {
            cout << a_prod << endl;
        } else if (b_prod > a_prod) {
            cout << b_prod << endl;
        } else if (a_prod == b_prod) {
            cout << a_prod << endl;
        }
    } else {
        return 0;
    }

    return 0;
}
