#include <iostream>
using namespace std;

int main()
{
  int x1, y1, r, x2, y2;
  cin >> x1 >> y1 >> r >> x2 >> y2;

  if (r > 1000 || r < 1)
  { 
    return 0;
  }

  if ((x2 - x1) + (y2 - y1) <= r)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}
