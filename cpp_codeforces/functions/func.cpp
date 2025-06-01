#include <iostream>
using namespace std;

int func(int a, int b) {
  return a + b;
}

int main (int argc, char *argv[]) {
  int a, b;
  cin >> a >> b;

  cout << func(a, b) << endl;

  return 0;
}
