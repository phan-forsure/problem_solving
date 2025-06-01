#include <iostream>
using namespace std;

int main()
{
  long long int n;
  cin >> n;
  long long int a[50];

  if (n < 1)
    return 0;
  if (n > 50)
    return 0;

  a[0] = 0;
  a[1] = 1;

  for (long long int i = 2; i < n; i++)
  {
    a[i] = a[i - 1] + a[i - 2];
  }

  cout << a[n - 1] << endl;

  return 0;
}