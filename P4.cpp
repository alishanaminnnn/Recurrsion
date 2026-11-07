#include <iostream>
using namespace std;
static int sum=0;
void digitSum(int x){
    if(x==0){
        return;
    }
    sum=sum + x%10;
    digitSum(x/10);
}

int main() {
  int x = 12345;
  digitSum(x);
  cout<<sum;
//   int add = 0;
//   while (x != 0) {
//     int temp = x % 10;
//     add = add + temp;
//     x = x / 10;
//   }
//   cout << add;

  return 0;
}