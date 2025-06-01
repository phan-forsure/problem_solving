#include <iostream>
using namespace std;

int main()
{
  int x, y, n;
  cin >> x >> y >> n;
  if (x > 100 || y > 100 || n > 100 || x < 1 || y < 1 || n < 1)
  {
    return 0;
  }
  for (int i = 1; i <= n; i++)
  {
    if (i % x == 0 && i % y != 0)
    {
      // cout << i % x << endl;
      cout << "Fizz" << endl;
    }
    else if (i % y == 0 && i % x != 0)
    {
      // cout << i % y << endl;
      cout << "Buzz" << endl;
    }
    else if (i % x == 0 && i % y == 0)
    {
      // cout << i % x << " " << i % y << endl;
      cout << "FizzBuzz" << endl;
    }
    else
    {
      cout << i << endl;
    }
  }
}
