#include <iostream>
using namespace std;

int main()
{
  int h, m;
  cin >> h >> m;
  if (h > 23 || m > 59)
  {
    return 0;
  }
  
  m = m - 45;

  if (m < 0)
  {
    h--;
    m += 60;
    if (h < 0)
    {
      h = 23;
    }
  }

  cout << h << " " << m << endl;
  return 0;
}
