#include <iostream>
using namespace std;

int main()
{
    long long int num;
    cin >> num;
    long long int reversed = 0;
    while (num > 0)
    {
        long long int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    cout << reversed;
    return 0;
}