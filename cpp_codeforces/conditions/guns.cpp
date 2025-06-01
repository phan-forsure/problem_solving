#include <iostream>
using namespace std;

int main()
{
  long long int n;
  cin >> n;
  int guns = 0;

  if (n < 0)
  {
    return 1;
  }

  if (n >= 5 && n < 10)
  {
    guns = 1;
  }
  else if (n >= 10 && n < 25)
  {
    guns = 2;
  }
  else if (n >= 25 && n <= 30)
  {
    guns = 3;
  }
  else if (n < 5)
  {
    if (n == 0)
    {
      cout << 0 << endl;
    }
    else
    {

      cout << "NO" << endl;
    }
    return 0;
  }

  cout << guns << endl;
  return 0;
}