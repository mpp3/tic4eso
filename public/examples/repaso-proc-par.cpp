#include "ticlib.h"

void f(int x)
{
  x = 2 * x;
  cout << x;
}

int main()
{
  f(1);
  f(2);
}
