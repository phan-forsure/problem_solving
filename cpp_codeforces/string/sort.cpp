#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;

  char ch;
  int freq[26] = {};

  for (int i = 0; i < n; i++) {
    cin >> ch;

    int index = ch-'a';
    freq[index]++;
  }

  for (int i = 0; i < 26; i++) {
    if (freq[i] == 0) continue;
    for (int x = 0; x < freq[i]; x++) {
      cout << char(i+'a');
    }
  }

  cout << endl;
  return 0;
}
