#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 0; j < a - i; j++)
    {
      cout << " ";
    }

    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}