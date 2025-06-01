#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a < b && a < c ? a : b < a && b < c ? b : c < a && c < b ? c : c) << " ";    
    cout << (a > b && a > c ? a : b > a && b > c ? b : c > a && c > b ? c : c) << endl;    
    return 0;
}
