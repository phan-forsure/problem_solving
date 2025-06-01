#include <iostream>
using namespace std;
int main (int argc, char *argv[]) {
  string s;
  getline(cin, s);

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ',') s[i] = ' ';
    if (char(s[i]) <= 90 && char(s[i]) >= 65) s[i] = int(char(s[i]) + 32); 
    else if (char(s[i] >= 97) && char(s[i] <= 122)) s[i] = int(char(s[i]) - 32);
  } // 65 CAPITAL 97 small

  cout << s << endl;

  return 0;
}
