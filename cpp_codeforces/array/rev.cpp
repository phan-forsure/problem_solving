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
  for (int i = 0; i < n; i++)
  {
    cout << a[n - i - 1] << " "; // 5 1 3 2
  }
  return 0;
}
