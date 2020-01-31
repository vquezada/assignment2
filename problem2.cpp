//Problem 2 (2darray.cpp): Write code that will fill
//the array a (declared below) with numbers
//typed in at the key- board. The numbers will be
//input five per line, on four lines (although your
//solution need not depend on how the input numbers
//are divided into lines).

//int a[4][5];

#include <iostream>
using namespace std;



int main(){
  int a[4][5]; //initializes that we will be making a 4x5 array
  int i; //rows
  int j; //collums

  cout << "Enter 20 numbers " << endl << endl; //tells user to type in 20 numbers
  for (i = 0; i < 4; ++i){ //this loop is for the rows
    for (j = 0; j < 5; ++j){ // this loop is for collums
      cout << "Enter number: "; // for each number it asks to enter a number
      cin >> a[i][j]; // stores numbers

    }

  }
//These loops are for printing
  for (i = 0; i < 4; ++i){ //prints rows
    for (j = 0; j < 5; ++j){ // prints collums

      cout << a[i][j] << " "; // prints numbers 4x5

    }

    cout << endl; // new line

  }

  return 0;

}
