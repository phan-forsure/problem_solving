#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    string s;
    cin >> s;

    string mins = s.substr(3);

    string converted;
    if (s[0] == '0' || s[0] == '1')
      converted = s;

    cout << converted << " AM" << endl;
  }

  return 0;
}
