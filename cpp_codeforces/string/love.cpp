#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main (int argc, char *argv[]) {
  int t;
  cin >> t;

  if (t > 50 || t < 1) return 0;

  for (int i = 0; i < t; i++) {
    string s, t;
    cin >> s >> t;
  
    string min_s = min(s, t); 
    string max_s = max(s, t);
    string result = "";
    string remainder = "";
    for (int i = 0; i < min_s.size(); i++) {
      result.push_back(s[i]);
      result.push_back(t[i]);
    }

    if (s.size() > t.size()) remainder = s.substr(t.size());
    else if (s.size() < t.size()) remainder = t.substr(s.size());

    cout << result + remainder << endl;

  }
  
  return 0;
}
