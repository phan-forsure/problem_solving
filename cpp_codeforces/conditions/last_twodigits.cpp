#include <iostream>
using namespace std;

int main()
{
    long long int m;
    cin >> m;
    cout << (m % 10) + ((m % 100) / 10) << endl;
    return 0;
}
