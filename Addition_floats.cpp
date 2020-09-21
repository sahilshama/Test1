#include <iostream>
using namespace std;

int main() {
  float num1;
  float num2;
  float sum;

  cout << "Please enter the first number \n";
  cin >> num1;
  cout << "Please enter the second number \n";
  cin >> num2;
  
  sum = num1+num2;
  cout << "Sum of both numbers is " << sum <<"\n";

  return 0;
}