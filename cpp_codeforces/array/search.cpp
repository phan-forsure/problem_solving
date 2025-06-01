#include <iostream>
using namespace std;

int main () {
  int n, m;
  cin >> n >> m;

  if (n < 1 || m < 1) return 0;
  
  int a[n*m];
  bool found = false;
  int x;

  for (int i = 0; i < n * m; i++) {
    cin >> a[i];
  }
  cin >> x;
  if (x < 1) return 0;
  for (int i = 0; i < n * m; i++) {
    if (x == a[i]) found = true;
    
  }

  cout << (found ? "will not take number" : "will take number") << endl;

  return 0;
}
