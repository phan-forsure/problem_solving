#include <iostream>
#include <cmath>
using namespace std;

long long equation(int x, int n) {
  long long int sum = 0;
  for (int i = 2; i <= n; i+=2) {
    sum += pow(x, i);
  }

  return sum;
}

int main () {
  int a, b;
  cin >> a >> b;
  if (a < 0 || a > 10 || b < 0 || b > 10) return 0;
  cout << equation(a, b) << endl;

  return 0;
}
