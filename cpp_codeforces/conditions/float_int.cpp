#include <iostream>
using namespace std;

int main()
{
    double N;

    cin >> N;

    if (N == static_cast<int>(N))
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "float" << endl;
    }

    return 0;
}
