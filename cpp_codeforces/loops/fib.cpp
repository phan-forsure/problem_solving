#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  long long int a = 0, b = 1, next = 0;
  for (int i = 0; i < n; i++)
  {
    cout << next << " ";
    a = b;
    b = next;
    next = a + b;
  }
  cout << endl;
  return 0;
}