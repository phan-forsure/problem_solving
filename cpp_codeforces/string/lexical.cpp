#include <iostream>
using namespace std;
int main (int argc, char *argv[]) {
  string x, y;
  getline(cin, x);
  getline(cin, y);

  if (x.size() > 20 || y.size() > 20 || x.size() < 1 || y.size() < 1) return 0;
  
  string min_string = min(x, y);
  string max_string = max(x, y);
  for (int i = 0; i < min_string.size(); i++) {
    if (min_string[i] < max_string[i]) {
      cout << min_string << endl;
      return 0;
    } else {
      cout << min_string << endl;
      return 0;
    }
  }
  return 0;
}
