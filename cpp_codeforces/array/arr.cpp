#include <iostream>
using namespace std;

int main()
{
  int n, b, index;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cin >> b;
  for (int i = 0; i < n; i++)
  {
    if (b == a[i])
    {
      index = i;
      break;
    }
    else
    {
      index = -1;
    }
    // if (index != a[i])
    // {
    //   cout << -1 << endl;
    //   break;
    // }
  }
  cout << index << endl;

  return 0;
}