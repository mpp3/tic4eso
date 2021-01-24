#include "ticlib.h"

void f()
{
  cout << "f";
}

void g()
{
  cout << "g";
  f();
}

int main()
{
  g();
}
