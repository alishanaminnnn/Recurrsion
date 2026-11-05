#include <iostream>
using namespace std;

// Print numbers from 1 to N.
void printNum(int n) {
  if (n == 0) {
    return;
  }
  printNum(n - 1);
  cout << n << " ";
}

// Find the sum of first N natural numbers.
int sumNum(int s) {
  if (s == 0) {
    return 0;
  }
  return s + sumNum(s - 1);
}

// Print even number till N
void evenNum(int a) {
  if (a == 0) {
    return;
  }
  cout << a << " ";
  evenNum(a + 2);
}

// Find Factorial of N
int Factorial(int x) {
  if (x == 0) {
    return 1;
  }
  return x * Factorial(x - 1);
;
}

int main() {
  cout<<Factorial(5);

  return 0;
}