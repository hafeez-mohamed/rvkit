
#include <iostream>

int factorial(int n) {
  int fact = 1;
  if (n > 1)
    fact = n * factorial(n - 1);
  return fact;
}

int main() {
  int facto = factorial(5);
  std::cout << "\nThe Factorial is: " << facto << "\n";
  return 0;
}
