#include <iostream>
using namespace std;

int cut(int n)
{
  int cut_n;

  cut_n = (n / 10 + n % 10);
  return cut_n;
}

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {

    int n;
    cin >> n;
    int sum = 0;

    if (n < 1)
      return 0;
    // if (n == 1)
    // {
    //   sum = 1;
    // }

    for (int j = 0; j <= n; j++)
    {
      sum += ((j / 10) + (j % 10));
      j = ((j / 10) + (j % 10));
      // if (j > 99)
      // {
      //   sum += ((j / 100) + (j % 100) + (j / 10) + (j % 10));
      // }
      // else if (j > 999)
      // {
      //   sum += ((j / 1000) + (j % 1000) + (j / 100) + (j % 100) + (j / 10) + (j % 10));
      // }
      cout << sum << endl;
    }

    cout << sum << endl;
  }

  return 0;
}
