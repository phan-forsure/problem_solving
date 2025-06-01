#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  int lowest, pos = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  lowest = a[0];
  for (int i = 0; i < n; i++)
  {
    if (a[i] < lowest)
    {
      lowest = a[i];
      pos = i;
    }
  }

  cout << lowest << " " << pos + 1 << endl;
  return 0;
}