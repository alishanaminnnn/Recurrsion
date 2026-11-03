#include <iostream>
using namespace std;

void birthday(int n) {
  if (n == 0) {
    cout << "Happy BirthDay";
    return;
  }
  cout << n << " Days for Birthday\n";
  birthday(n - 1);
}

int main() {
  birthday(5);

  return 0;
}