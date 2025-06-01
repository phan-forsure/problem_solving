#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    int n;
    double a;
    cin >> n;
    if (n < 1) return 0;

    for (int i = 0; i < n; i++) {
        cin >> a;
        cout << fixed << setprecision(1) << (double)(a / 2.0)  << setprecision(1) << endl;
    }

    return 0;
}
