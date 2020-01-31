//Problem 1 (intarray.cpp): Write a program that
//will read up to ten nonnegative integers into an
//array called numberArray and then write the integers
//back to the screen (console output). For this
//exercise you need not use any functions.

//Reference zybook figure 5.2.2

#include <iostream>
#include <vector> //because we will be creating an array we need to #include vector.
using namespace std;


int main(){
  const int NUM_VALS = 10; //The program will read up to 10 positive numbers
  vector<int> numberArray(NUM_VALS);//calls the vector (numberArray) and the size (NUM_VALS = 10)
  unsigned i;// i for our loops

  cout << "Enter 10 nonnegative intergers: " << endl; // ask for numbers

  for (i = 0; i < numberArray.size(); ++i) { // loop for entering the 10 numbers
    cout << "Int: "; // repeats 10 times
    cin >> numberArray.at(i); // adds numbers into vector
  }
  cout << "Numbers entered: "; // prints before displaying the numbers
   for (i = 0; i < numberArray.size(); ++i) { // this loop is for the numbers we entered
      cout << numberArray.at(i) << " "; // iterates through loop and prints numbers side by side
   }
   cout << endl; // new line

   return 0;
}
