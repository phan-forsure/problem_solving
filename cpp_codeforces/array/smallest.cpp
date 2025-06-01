#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  if (t > 100 || t < 1) return 0;
  
  for (int tests = 0; tests < t; tests++) {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int lowest = a[0] + a[1] + 2 - 1;

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        lowest > a[i] + a[j] + (j+1) - (i+1) ? lowest = a[i] + a[j] + (j+1) - (i+1) : lowest = lowest;
      }
    }
    
    cout << lowest << endl;
  }


  return 0;
}
