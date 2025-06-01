#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a < 1 || a > 100 || b < 1 || b > 100 || c < 1 || c > 100)
  {
    return 0;
  }

  if (a == b && a == c && b == c)
  {
    cout << a + b << endl;
  }
  else if (a + b > a + c && a + b > b + c)
  {
    cout << a + b << endl;
  }
  else if (a + c > a + b && a + c > b + c)
  {
    cout << a + c << endl;
  }
  else if (b + c > a + b && b + c > a + c)
  {
    cout << b + c << endl;
  }

  return 0;
}