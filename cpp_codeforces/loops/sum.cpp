#include <iostream>
using namespace std;

int main()
{
    unsigned long long x;
    unsigned long long sum = 0;
    cin >> x;

    if (x < 0) return 0;

    for (unsigned long long i = x; i > 0; i /= 10) {
        sum += (i % 10);
    }

    cout << sum << endl;

    return 0;
}
