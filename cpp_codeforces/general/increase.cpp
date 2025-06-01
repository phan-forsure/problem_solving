#include <iostream>
#include <algorithm>
using namespace std;

void input_arr(int n, int arr[])
{

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

void output_arr(int n, int arr[])
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;

    int a[n];

    input_arr(n, a);
    if (n == 1)
    {
      cout << "YES" << endl;
      return 0;
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
      bool dup = false;
      for (int j = i; j < n; j++)
      {
        if (a[i] == a[j])
        {
          cout << a[i] << " " << a[j] << endl;
          cout << "NO" << endl;
          dup = true;
          break;
        }
        else
        {
          cout << "YES" << endl;
          break;
        }
      }
      if (dup == true)
      {
        break;
      }
    }
  }

  return 0;
}
