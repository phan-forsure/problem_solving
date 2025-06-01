#include <iostream>
using namespace std;

int main()
{
  long long int n;
  cin >> n;
  long long int nums;
  int less_sum = 0, total_sum = 0;
  if (n < 2) return 0;
  
  for (int i = 0; i < n - 1; i++) {
    cin >> nums;
    less_sum += nums;
  }

  for (int i = 1; i <= n; i++) {
    total_sum += i;
  }

  cout << total_sum - less_sum << endl;

  return 0;
}
