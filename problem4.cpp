//Problem 4 (salestax.cpp): Implement a function called addTax. The function addTax has two formal
//parameters: taxRate, which is the amount of sales tax expressed as a percent; and cost, which is the cost
//of an item before tax. The function returns the value (float) of cost so that it includes sales tax


#include <iostream>
using namespace std;

float addTax(float taxRate, float cost){

  float totalCost;
  totalCost = cost + (cost * taxRate);

  return totalCost;
}


int main(){

  float tax;
  float itemCost;

  cout << "Enter cost of item: ";
  cin >> itemCost;
  cout << "Enter the tax as decimal: ";
  cin >> tax;


  cout << "Item with tax is: " << addTax(tax, itemCost) << endl;




  return 0;


}
