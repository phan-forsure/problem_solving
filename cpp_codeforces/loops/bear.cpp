#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int years = 0;
  while (a <= b)
  {
    b *= 2;
    a *= 3;
    years++;
  }
  cout << years << endl;
}