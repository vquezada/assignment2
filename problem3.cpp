//Problem 3 (zeroboth.cpp): Implement a void function called zeroBoth that has two call-by- reference
//parameters, both of which are variables of type int, and sets the values of both variables to 0


#include <iostream>
using namespace std;

void zeroBoth(int& var1, int& var2){

  var1 = 0;
  var2 = 0;

}

int main(){

  int one;
  int two;

  cout << "Enter a number";
  cin >> one;
  cout << "Enter a number";
  cin >> two;

  zeroBoth(one,two);

  cout << one << endl << two << endl;

return 0;

}
