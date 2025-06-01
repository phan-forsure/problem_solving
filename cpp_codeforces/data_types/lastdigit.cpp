#include <iostream>
using namespace std;

int main()
{
  unsigned long long num;
  cin >> num;
  cout << ((num * 5) + 1) % 10 << endl;
  return 0;
}