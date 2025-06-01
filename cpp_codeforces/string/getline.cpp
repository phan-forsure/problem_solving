#include <iostream>
#include <cstring>
using namespace std;
int main (int argc, char *argv[]) {
  string s;
  getline(cin, s);

  for (int i = 0; i < s.size(); i++) {
    if (char(s[i]) == 92) {
      s.erase(i);
    }
  }

  cout << s << endl;

  return 0;
}
