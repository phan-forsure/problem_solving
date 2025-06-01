#include <iostream>
using namespace std;

void repeat(char x, int n) {
  for (int i = 0; i < n; i++) {
    cout << x << " ";
  }
}

int main (int argc, char *argv[]) {
  int t; cin >> t;

  for (int i = 0; i < t; i++) {
    int n; char x; cin >> n >> x;
    repeat(x, n);
    cout << endl;
  }

  return 0;
}
