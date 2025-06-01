#include <iostream>
using namespace std;

int main()
{
  long long int n;
  cin >> n;
  long long int reversed = 0;
  long long int original = n;

  if (n < 0)
  {
    return 0;
  } 

  while (n > 0)
  {
    long long int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 10;
  }
  if (original == reversed)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
