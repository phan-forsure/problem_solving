#include <iostream>
using namespace std;

int main() {
    signed long long int x;
    cin >> x;
    cout << x / 3600 << " " << (x % 3600) / 60 << " " << x % 60 << endl;
    return 0;
}