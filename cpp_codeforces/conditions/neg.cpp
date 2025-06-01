#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long int a, b, c;

    cin >> a >> b >> c;

    long long int largestNegative = INT_MIN;
    bool hasNegative = false;

    if (a < 0)
    {
        largestNegative = a;
        hasNegative = true;
    }
    if (b < 0 && b > largestNegative)
    {
        largestNegative = b;
        hasNegative = true;
    }
    if (c < 0 && c > largestNegative)
    {
        largestNegative = c;
        hasNegative = true;
    }

    if (hasNegative)
    {
        cout << largestNegative << endl;
    }
    else
    {
        return 0;
    }

    return 0;
}
