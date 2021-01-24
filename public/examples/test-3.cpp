#include "ticlib.h"

int f(int x)
{
  x = x + 1;
  x = 2 * x;
  x = x - 1;
  return x;
  x = x / 2;
  return x;
}

int main()
{
  int num{5};
  cout << f(num);
}
