#include <iostream>
using namespace std;

void func(int n) {
  int a[n]; int b[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  for (int i = 0; i < n; i++) cout << b[i] << " ";
  for (int i = 0; i < n; i++) cout << a[i] << " ";
}

int main (int argc, char *argv[]) {
  int n; cin >> n;
  func(n);  
  return 0;
}
