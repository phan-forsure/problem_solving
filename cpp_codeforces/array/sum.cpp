#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n < 1) return 0;

  char arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += (arr[i] - '0');
  }

  cout << sum << endl;

  return 0;
}
