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
  }

  int max = a[0];
  int min = a[0];
  int minI = 0;
  int maxI = 0;

  for (int i = 0; i < n; i++)
  {
    if (a[i] > max)
    {
      maxI = i;
      max = a[i];
    }
    if (a[i] < min)
    {
      minI = i;
      min = a[i];
    }
  }

  swap(a[minI], a[maxI]);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}