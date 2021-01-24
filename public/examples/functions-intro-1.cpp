#include "ticlib.h"

void print_solutions(double a, double b, double c)
{
  double discriminant {b*b - 4*a*c};
  vector<double> solutions {};
  if (discriminant >= 0) {
    solutions.push_back((-b+sqrt(discriminant))/(2*a));
  }
  if (discriminant > 0) {
    solutions.push_back((-b-sqrt(discriminant))/(2*a));
  }
  cout << "Solutions: ";
  for (int i {0}; i < solutions.size(); ++i) {
    cout << solutions[i] << " ";
  }
  cout << "\n";
}

void print_factorization(double a, double b, double c)
{
  double discriminant {b*b - 4*a*c};
  vector<double> solutions {};
  if (discriminant >= 0) {
    solutions.push_back((-b+sqrt(discriminant))/(2*a));
  }
  if (discriminant > 0) {
    solutions.push_back((-b-sqrt(discriminant))/(2*a));
  }
  cout << "Factorization: ";
  if (a != 1) {
    cout << a;
  }
  if (solutions.size() == 0) {
    cout << "x^2 + " << b << "x + " << c << "\n";
  }
  else if (solutions.size() == 1) {
    cout << "(x - " << solutions[0] << ")^2\n";
  }
  else {
    cout << "(x - " << solutions[0] << ")(x - ";
    cout << solutions[1] << ")\n";
  }
}

int main()
{
  cout << "***** Quadratic equation solver *****\n\n";
  cout << "Write the coefficients (a b c): ";
  double a;
  double b;
  double c;
  cin >> a >> b >> c;
  if (a == 0) {
    cout << "Sorry, this is not a quadratic equation.\n";
  }
  else {
    print_solutions(a, b, c);
    print_factorization(a, b, c);
  }
}
