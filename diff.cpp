#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, diff;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  diff = first_number - second_number;

  // prints diff
  cout << diff;     
  
  return 0;
}