#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    int small_pos = (int)(a) % 97;
    int large_pos = (int)(a) % 65;
    
    if ((int)(a) >= 97 && (int)(a) <= 122) {
        cout << "small" << " " << small_pos << endl;
    } else if ((int)(a) >= 65 && (int)(a) <= 90) {
        cout << "capital" << " " << large_pos << endl;
    } else if ((int)(a) >= 48 && (int)(a) <= 57) {
        cout << "digit" << endl;
    } else {
        cout << "symbol" << endl;
    }
    
    return 0;
}
