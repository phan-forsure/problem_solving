#include <iostream>
using namespace std;

int main()
{
  int n, a;
  cin >> n;
  long long int sum = 0;
  int odds = 0;
  int evens = 0;
  if (n < 1)
    return 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    if (a < 1)
      return 0;
    sum = sum + a;
    if (a % 2 == 0)
    {
      evens++;
    }
    else
    {
      odds++;
    }
  }
  cout << sum << " " << odds << " " << evens << endl;

  return 0;
}
