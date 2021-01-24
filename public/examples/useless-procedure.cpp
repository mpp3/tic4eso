#include "ticlib.h"
#include "dyno.h"

void useless(double base, int exponent)
{
  double result {1};
  if (base == 0 && exponent != 0) {
    result = 0;
  }
  else if (base !=0) {
    if (exponent < 0) {
      base = 1/base;
      exponent = -exponent;
    }  
    while (exponent > 0) {
      result = result * base;
      exponent--;
    }
  }
}

int main() 
{
  double base {2};
  int exponent {-3};
  useless(base, exponent);
}
