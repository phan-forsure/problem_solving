#include <iostream>
using namespace std;

void func(int a) {
  for (int i = 1; i <= a; i++) cout << i << (i == a ? "" : " ") ; 
}

int main (int argc, char *argv[]) {
  int i;
  cin >> i;
  func(i);
  cout << endl;

  return 0;
}
