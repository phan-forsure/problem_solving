#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

  if (num % 2 == 0)
  {
    cout << num << endl;
  }
  else
  {
    cout << num * 2 << endl;
  }

  return 0;
}