#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
  if (x <= 1) return false;
  for (int i = 2; i <= sqrt(x); i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main (int argc, char *argv[]) {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int x;
    cin >> x;
    cout << (isPrime(x) ? "YES" : "NO") << endl;
  }

  return 0;
}
