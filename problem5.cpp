//Problem 5 (conversion.cpp): Write a program
//that will read in a length in feet and inches and output the
//equivalent length in meters and centimeters.
//Use at least three functions: one for user input, one or more
//for calculating, and one for output(console).
////Include a loop that lets the user repeat this
//computation for new input values until the user says
//he or she wants to end the program (user has to type exit).
//There are 0.3048 meters in a foot, 100 centimeters in a meter,
//and 12 inches in a foot.


#include <iostream>
#include <string>
using namespace std;

double inches;
double feet;
//this function uses feet and inches as paramters (which I use throught the other funtions)
void userInput(double& feet, double& inches){




  cout << "How many feet: " << endl;
  cin >> feet;
  cout << "How many inches: " << endl;  //asks user for feet and inches
  cin >> inches;


}
// this fucntion converts
double inchesToCent(double& feet, double& inches){

  double cent;
  double totalInches;
  double feetInInches;
  feetInInches = feet * 12;            //this funciton makes the feet and inches ALL inches
  totalInches = feetInInches + inches;  //then turns them into centimeters
  cent = totalInches * 2.54;
  return cent;


}

  double centToMet(double& feet, double& inches){

    double totalMeters;
    int wholeMeters;

    totalMeters = inchesToCent(feet, inches) / 100; //this fucntion turns centimeters into meters
    wholeMeters = static_cast<int>(totalMeters);
    return totalMeters;

  }

  double finalCent;
  double totalMeters;

  double leftOvers(double& feet, double& inches){ // this function gets the left over meters and turns them into centimeters


    double finalCent;
    double totalMeters;
    int wholeMeters;

    totalMeters = centToMet(feet, inches) / 100;
    wholeMeters = static_cast<int>(totalMeters);
    return totalMeters;

    finalCent = (totalMeters - wholeMeters) * 100;
    return finalCent;

  }


  void finalOutput(){ // output function that outputs the feet to inches to meters to centimeters

    userInput(feet, inches);

      cout << feet << " feet" << " and  " << inches << " inches " << "is equal too " << centToMet(feet, inches) << " meters and " << leftOvers(feet, inches) << " centimeters" << endl;



  }




int main(){

// while loop that asks the users to continue for another conversion or to exit
  string convertAgain;
  while (convertAgain != "n"){

    finalOutput();

    cout << "enter y to use converter again, enter n to exit ";
    cin >> convertAgain;

  }

  return 0;


}
