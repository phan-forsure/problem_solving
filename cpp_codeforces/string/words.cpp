#include <iostream>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  int count = 0;

  int last_index;
  for (int i = 0; i < s.length(); i++)
  {
    string sub = s.substr(last_index);
    // cout << sub << endl;
    sub.erase((s.find(' ')) + 1);
    last_index = sub.length();
    cout << last_index << " " << sub << endl;
  }

  // cout << s.length() << endl;
  return 0;
}
