#include <iostream>
#include <climits>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    ll min = LLONG_MAX;
    int counter = 0, length = 1;
    for (int i = 1; i < n; i++) {
      if (arr[i] >= arr[i-1]) {
        length++;
      } else {
        counter += (length * (length + 1)) / 2;
        length = 1;
      }

    }
    counter += (length * (length + 1)) / 2;
    cout << counter << endl;
  }
  return 0;
}
