#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] < 0)
    {
      a[i] = 2;
    }
    else if (a[i] > 0)
    {
      a[i] = 1;
    }
    cout << a[i] << " ";
  }

  return 0;
}