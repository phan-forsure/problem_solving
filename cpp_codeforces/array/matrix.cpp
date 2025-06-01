#include <iostream>
using namespace std;
int main () {
  int n;
  cin >> n;
  if (n < 1 || n > 100) return 0;

  int a[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      if (a[i][j] > 100 || a[i][j] < -100) return 0;
    }
  }
  
  int sum_1 = 0;
  for (int i = 0; i < n; i++) {
    sum_1 += a[i][i];
  }

  int sum_2 = 0;
  for (int i = 1; i < n + 1; i++) {
    sum_2 += a[i-1][n-i];
  }

  cout << abs(sum_1 - sum_2) << endl;
  return 0;
}

// 0 0, 1 1, 2 2, 3 3;
// 0 3, 1, 2, 2, 1, 3 0;
