#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  if (t < 1 || t > 100) return 0;
  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;
    
    bool bad_good = false;
    for (int j = 0; j < s.length(); j++) {
      if (s.substr(j, 3) == "101" || s.substr(j, 3) == "010") {
        bad_good = true;
        break;
      }
    }

    cout << (bad_good ? "Good" : "Bad") << endl;
  }

  return 0;
}
