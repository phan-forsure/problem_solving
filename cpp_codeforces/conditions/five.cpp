#include <iostream>
using namespace std;

int main()
{
  unsigned int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
  int n;
  cin >> x1 >> x2 >> x3 >> x4 >> x5;

  if (x1 != 1)
  {
    n = 1;
  }
  else if (x2 != 2)
  {
    n = 2;
  }
  else if (x3 != 3)
  {
    n = 3;
  }
  else if (x4 != 4)
  {
    n = 4;
  }
  else if (x5 != 5)
  {
    n = 5;
  }

  cout << n << endl;
  return 0;
}