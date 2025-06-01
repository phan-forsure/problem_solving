#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    ll n, s;
    cin >> n;
    if (n > 9 || n < 1)
        return 0;

    cin >> s;

    if (s > 999999999 || s < 1)
        return 0;

    ll a[n];
    int length = n;

    for (ll i = 0; i < n; i++)
    {
        int digit = s / (ll)(pow(10, length - 1));
        a[i] = digit;
        s %= (ll)(pow(10, length - 1));
        length--;
    }

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        // sum += a[i];
    }
    cout << endl;
    // cout << sum << endl;
    return 0;
}
