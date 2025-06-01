#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    char star = '*';
    for (int j = 0; j <= i; j++)
    {
      cout << star;
    }

    cout << endl;
  }
}