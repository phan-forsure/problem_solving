#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  string str;
  cin >> str;
  string query;

  string substr, pop_back, sort, back, reverse, front, push_back, print;
  for (int i = 0; i < q; i++)
  {
    cin >> query;
    if (query == "substr")
    {
      int start, end;
      cin >> start >> end;
      cout << str.substr(start - 1, end) << endl;
    }
    else if (query == "sort")
    {
      int start, end;
      cin >> start >> end;
      string sorted = str.substr(start - 1, end);
      std::sort(sorted.begin(), sorted.end());
    }
    else if (query == "pop_back")
    {
      str.pop_back();
    }
    else if (query == "back")
    {
      cout << str.back() << endl;
    }
    else if (query == "reverse")
    {
      int start, end;
      cin >> start >> end;
      string reversed = str.substr(start - 1, end);
      std::reverse(reversed.begin(), reversed.end());
    }
    else if (query == "front")
    {
      cout << str.front() << endl;
    }
    else if (query == "push_back")
    {
      char x;
      cin >> x;
      str.push_back(x);
    }
    else if (query == "print")
    {
      int i;
      cin >> i;
      cout << str[i] << endl;
    }
  }

  return 0;
}

// 18 8
// assiutinupperegypt
// substr 1 6
// sort 5 8
// pop_back
// back
// reverse 1 6
// front
// push_back i
// print 4

// substr 1 6 assiut
// sort 5 8 uti assi(itu)nupperegypt
// pop_back assi(itu)nupperegyp(t)
// back (p)
// reverse 1 6 (tiissau)nupperegyp
// front (t)
// push_back i (tiissau)nupperegypi
// print 4 t