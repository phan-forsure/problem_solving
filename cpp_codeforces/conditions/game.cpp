#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;

  if (x < y)
  {
    if (x + 3 > y)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
  else if (x > y)
  {
    if (y + 3 > x)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}