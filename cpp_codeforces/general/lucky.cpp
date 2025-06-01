#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    string s;
    cin >> s;

    string first = s.substr(0, 3);
    string second = s.substr(3);

    int first_num = (char(first[0] - '0')) + (char(first[1] - '0')) + (char(first[2] - '0'));
    int second_num = (char(second[0] - '0')) + (char(second[1] - '0')) + (char(second[2] - '0'));

    cout << (first_num == second_num ? "YES" : "NO") << endl;
  }

  return 0;
}
