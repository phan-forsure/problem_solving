#include <iostream>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  if (n < 1)
  {
    return 0;
  }
  else if (n <= 3)
  {
    cout << "Prime" << endl;
  }
  else if (n % 2 == 0 || n % 3 == 0)
  {
    cout << "Not Prime" << endl;
  }
  else
  {
    bool isPrime = true;

    for (long long i = 5; i * i <= n; i += 6)
    {
      if (n % i == 0 || n % (i + 2) == 0)
      {
        isPrime = false;
      }
    }

    if (isPrime)
    {
      cout << "Prime" << endl;
    }
    else
    {
      cout << "Not Prime." << endl;
    }
  }

  return 0;
}
