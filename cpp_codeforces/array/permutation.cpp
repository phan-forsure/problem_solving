#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n < 1 || n > 1000) // range
    return 0;

  int a[n], b[n];
  for (int i = 0; i < n; i++) // input array a
    cin >> a[i];

  for (int i = 0; i < n; i++) // input array b
    cin >> b[i];

  sort(a, a+n);
  sort(b, b+n);
  
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
