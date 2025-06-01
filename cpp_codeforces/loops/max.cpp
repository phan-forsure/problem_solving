#include <iostream>
using namespace std;

int main()
{
  long long int a, n;
  cin >> a;
  long long int difference = 0, first = 0, second = 0;
  for (int i = 0; i < a; i++)
  {
    cin >> n;
    if (first == 0)
      first = n;
    else if (first != 0 && second == 0)
      second = n;

    if (first > n)
      first = n;
    if (second < n)
      second = n;
  }
  difference = second - first;
  cout << difference << endl;
  return 0;
}