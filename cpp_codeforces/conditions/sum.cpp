#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x < 100 || x > 999) {
        return 0;
    }
    cout << (x / 100) + ((x / 10) % 10) + (x % 10) << endl;
    return 0;
}
