#include <iostream>
using namespace std;

int main()
{
  int n, i;
  cin >> n >> i;
  int sum = (i * (i + 1)) / 2;
  int num = n * (1 + sum);
  cout << num << endl;

  if (num < 0)
  {
    cout << "Negative" << endl;
  }
  else if (num > 0)
  {
    cout << "Positive" << endl;
  }
  else if (num == 0)
  {
    cout << "Zero" << endl;
  }
  return 0;
}