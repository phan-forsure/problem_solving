#include <iostream>
using namespace std;
int main (int argc, char *argv[]) {
  string a;
  getline(cin, a);
  int sum = 0;
  for (int i = 0; i < a.size(); i++) {
    sum += (char(a[i])-48);
  }

  cout << sum << endl;

  return 0;
}
