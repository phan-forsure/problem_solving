#include <iostream>
using namespace std;
int main (int argc, char *argv[]) {
  string s;
  cin >> s;
  int f[26] = {};

  for (int i = 0; i < s.size(); i++) {
    f[s[i]-'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if (f[i]) cout << char(i+'a') << " : " << f[i] << endl; 
  }

  return 0;
}
