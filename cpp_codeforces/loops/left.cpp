#include <iostream>
using namespace std;

int main()
{
  long long int n;
  cin >> n;
  long long int digit = n;

  while (n > 0)
  {
    digit = n % 10;
    n /= 10;
  }
  cout << digit << endl;
  return 0;
}