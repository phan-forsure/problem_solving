#include <iostream>
using namespace std;

void swap(int a, int b) {
  int temp;

  temp = a;
  a = b;
  b = temp;
  cout << a << " " << b << endl;
}

int main (int argc, char *argv[]) {
  int a, b;
  cin >> a >> b;
  
  swap(a, b);
  return 0;
}
