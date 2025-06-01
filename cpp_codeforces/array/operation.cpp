#include <iostream>
using namespace std;
#define ll long long

int main()
{
  // ll n;
  // cin >> n;
  // if (n < 1 || n > 200) return 0;
  // ll a[n]; ll operations = 0;

  // for (ll i = 0; i < n; i++)
  // {
  //   cin >> a[i];
  //   if (a[i] < 1) return 0;
  // }

  // for (ll i = 0; i <= n; i++)
  // {
  //   if (a[i] % 2 != 0)
  //   {
  //     cout << operations / n << endl;
  //     return 0;
  //   }
  //   else
  //   {
  //     for (ll j = 0; j < n; j++)
  //     {
  //       if (a[j] % 2 == 0)
  //       {
  //         a[j] /= 2;
  //         operations++;
  //       }
  //       else
  //       {
  //         break;
  //       }
  //     }
  //   }
  // }

  // cout << operations / n << endl;

  int n;
  cin >> n;
  if (n < 1 || n > 200)
    return 0;
  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] < 1)
      return 0;
  }

  int operations = 0;

  while (true)
  {
    for (int i = 0; i <= n; i++)
    {
      for (int j = 0; j < n; j++) {
        if (a[j] % 2 != 0)
        {
          cout << operations << endl;
          return 0;
        }
        else
        {
          a[j] /= 2;
        }
      }
      operations++;
    }
  }

  return 0;
}
