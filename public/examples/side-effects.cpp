#include "ticlib.h"

int main()
{
  string s {""};
  cout << "Escriba su nombre: ";
  cin >> s;
  if ('a' <= s[0] && s <= 'z') {
    s[0] -= 32;
  }
  cout << "Hello, " << s << "\n";
}
