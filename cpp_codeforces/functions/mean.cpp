#include <iostream>
#include <iomanip>
using namespace std;

void avg(double arr[], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  cout << fixed; cout << setprecision(7);
  cout << sum / size << endl;
}

int main (int argc, char *argv[]) {
  int n; cin >> n;
  double arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  avg(arr, n);

  return 0;
}
