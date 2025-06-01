#include <iostream>
using namespace std;

int main () {
  int a, b, s;
  cin >> a >> b;
  if (a > 10 || a < 1 || b > 10 || b < 1) return 0;
  s = a + b + 1;

  char arr[s];
  for (int i = 0; i < s; i++) {
    cin >> arr[i];
  }

  bool correct = true;
  for (int i = 0; i < s; i++) {
    // compare ascii code for '-'
    //if (int(arr[a]) == 45) correct = true; else correct = false; break;
    if (i == a) {
      //cout << i << " == " << a << endl;
      if (int(arr[i]) != 45) {
       // cout << int(arr[i]) << " == " << 45 << endl;
        correct = false;
        break;
      }
    } else if ((int(arr[i]) < 48 || int(arr[i]) > 57)) {
      correct = false;
      break;
    }
    // range of number between '0' and '9' in ascii 
    //if (int(arr[i]) > 57 || int(arr[i]) < 48) correct = false; break;
  }

  cout << (correct ? "Yes" : "No") << endl;
  
  return 0;
}
