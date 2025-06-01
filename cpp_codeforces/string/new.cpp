#include <iostream>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  int count = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'e' || s[i] == 'E')
    {
      count++;
    }
    else if (s[i] == 'g' || s[i] == 'G')
    {
      count++;
    }
    else if (s[i] == 'y' || s[i] == 'Y')
    {
      count++;
    }
    else if (s[i] == 'p' || s[i] == 'P')
    {
      count++;
    }
    else if (s[i] == 't' || s[i] == 'T')
    {
      count++;
    }
  }

  cout << count / 5 << endl;
  return 0;
}

// ask U