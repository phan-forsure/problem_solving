#include <iostream>
#include <cmath>
using namespace std;
int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  for (int test = 0; test < t; test++) {
    long long int n;
    cin >> n;
    if (n < 1) return 0;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];

    double square = sqrt(s);

    if (square != int(square)) cout << "NO" << endl;
    else cout << "YES" << endl;
  }

  return 0;
}
