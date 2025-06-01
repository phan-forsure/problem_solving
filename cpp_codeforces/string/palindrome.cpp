#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  string s;
  getline(cin, s);

  string reversed = s;
  reverse(reversed.begin(), reversed.end());

  cout << (s == reversed ? "YES" : "NO") << endl;

  return 0;
}
