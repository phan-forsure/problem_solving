#include <iostream>
using namespace std;
int main (int argc, char *argv[]) {
  string a, b;
  getline(cin, a);
  getline(cin, b);

  string concat = a+b;
  cout << a.size() << " " << b.size() << endl;
  cout << concat << endl;
  
  char a_first = a[0];
  a[0] = b[0];a_first:
  b[0] = a_first;

  cout << a << " " << b << endl;
  return 0;
}
