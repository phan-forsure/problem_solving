#include <iostream>
using namespace std;

int main()
{
    int n;
    int f = 1;
    cin >> n;
    if (n < 1 || n > 10) {
        return 0;
    }

    for (int i = 1; i <= n; ++i) {
        f *= (i);
    }

    cout << f << endl;
    
    return 0;
}
