#include <iostream>
using namespace std;
int main (int argc, char *argv[]) {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int fish;
    cin >> fish;

    if (fish == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}
