#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    cout << ((x > 90) ? char(int(x) - 32) : char(int(x) + 32)) << endl;

    return 0;
}
