#include <iostream>
using namespace std;
int main() {

  // a stands for the amount

  int hundreds, fiftys, twentys, tens, ones;

  int a;
  cout << "Enter the amount you want to know denominations of" << endl;
  cin >> a;

  switch (1) {

  case 1:
    hundreds = a / 100;
    cout << hundreds << endl;
    a = a - 100 * hundreds;

  case 2:
    fiftys = a / 50;
    cout << fiftys << endl;
    a = a - 50 * fiftys;

  case 3:
    twentys = a / 20;
    cout << twentys << endl;
    a = a - 20 * twentys;

  case 4:
    tens = a / 10;
    cout << tens << endl;
    a = a - 10 * tens;

  case 5:
    ones = a / 1;
    cout << ones << endl;
    a = a - 1 * ones;
  }
  return 0;
}