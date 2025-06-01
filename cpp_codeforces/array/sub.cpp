#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  if (n < 1 || m < 1 || n < m)
    return 0;
  int a[n], b[m], sequence[m], sorted_seq[m];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];
  
  return 0;
}
