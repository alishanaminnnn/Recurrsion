#include <iostream>
using namespace std;
static int count = 0;
int digitCount(int x) {
  if (x == 0) {
    return count;
  }
  count++;
  digitCount(x / 10);
  return count;
}

int main() {
  int x = 122342343;
  cout<<digitCount(x);

  return 0;
}