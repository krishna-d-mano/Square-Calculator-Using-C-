#include <iostream>
using namespace std;

void getSquareInput(int &n) {
  cout << "Enter the number you would like to see a square for: ";
  cin >> n;
}

int calcSquare(int n)
{
  return n*n;
}

int main() {
  int num = 0;
  int result = 0;
  getSquareInput(num);
  result = calcSquare(num);
  cout << "The square of " << num << " is: " << result << endl;
  return 0;
}