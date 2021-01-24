#include "ticlib.h"
#include "dyno.h"

int first_found(int searched, vector<int> v)
{
  for (int i {0}; i < v.size(); ++i) {
    if (v[i] == searched) {
      return i;
    }
  }
  return -1;
}

int last_found(int searched, vector<int> v)
{
  int position {-1};
  for (int i {0}; i < v.size(); ++i) {
    if (v[i] == searched) {
      position = i;
    }
  }
  return position;
}


int main()
{
  vector<int> numbers {10, 8, 7, 4, 7, 8, 7, 3};
  int target {7};
  for (int x : numbers) {
    cout << x << " ";
  }
  cout << "\n";
  cout << target << " is in position " << first_found(target, numbers) << "\n";
  cout << target << " is in position " << last_found(target, numbers) << "\n";
}
