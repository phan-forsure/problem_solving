#include <iostream>
#include <vector>
using namespace std;

int main()
{
  unsigned int t;
  cin >> t;

  for (unsigned int i = 0; i < t; i++)
  {
    unsigned int n;
    cin >> n;

    unsigned int total = 0;
    for (unsigned int j = 1; j <= n; j++)
    {
      unsigned int sum = 0;
      unsigned int count = j;
      while (count != 0)
      {
        unsigned int a = count % 10;
        sum += a;
        count /= 10;
      }
      total += sum;
    }
    cout << total << endl;
  }

  return 0;
}
