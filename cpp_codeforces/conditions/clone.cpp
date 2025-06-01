#include <iostream>
using namespace std;
#define ll long long

int main() {

  ll c, o;
  cin >> c >> o;
  
  if (o == 1 && c > 0) cout << "NO" << endl;
  else if (o == 0) cout << "NO" << endl;
  else {
    ll rc = c-(o-1);
    if (rc % 2 == 0 && rc >= 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;

    }
  }
  
  return 0;
}