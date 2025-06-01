#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  bool truth = false;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] == a[n - i - 1])
    {
      truth = true;
    }
    else
    {
      truth = false;
      break;
    }
  }
  if (truth)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}
