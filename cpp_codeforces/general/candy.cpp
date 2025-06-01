#include <iostream>
using namespace std;

int findMin(int arr[], int n) {
  int min = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] < min) min = arr[i];
  }
  return min;
}

int main () {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    int a[n];
    for (int j = 0; j < n; j++) cin >> a[j];

    int min = findMin(a, n);
    int sum_of_bites = 0;
    for (int m = 0; m < n; m++) {
      int bites = a[m] - min;
      sum_of_bites += bites;
     // cout << bites << endl;
    }
    cout << sum_of_bites << endl;
  }

  return 0;
}
