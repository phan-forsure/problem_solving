#include <iostream>
using namespace std;

int main()
{

  unsigned int a, b;
  char s;
  bool isValid = false;
  cin >> a >> s >> b;
  switch (s)
  {
  case '+':
    isValid = (a + b == a + b);
    break;
  case '-':
    isValid = (a - b == a - b);
    break;
  case '*':
    isValid = (a * b == a * b);
    break;
  case '/':
    if (b != 0)
    {
      isValid = (a / b == a / b);
    }
    break;
  default:
    cout << "invalid" << endl;
    return 0;
  }

  cout << (isValid ? "valid" : "invalid") << endl;

  return 0;
}
