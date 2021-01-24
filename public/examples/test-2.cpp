#include "ticlib.h"

int next(int x)
{
  return x+1;
}

int opposite(int x)
{
  return -x;
}

int main()
{
  cout << next(opposite(1)) << opposite(next(1));
}
