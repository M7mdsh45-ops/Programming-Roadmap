// roadmap_p35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void ReadpiggyBankContent(int &penny , int &nickel, int &dime, int &quarter, int &dollar)
{
	cout << " Please , enter pennies you got \n "; 
	cin >> penny;
	cout << " Please , enter nickels you got \n "; 
	cin >> nickel;
	cout << " Please , enter dimes you got \n "; 
	cin >> dime;
	cout << " Please , enter quarters you got \n "; 
	cin >> quarter;
	cout << " Please , enter dollars you got \n "; 
	cin >> dollar;

}


int CalcpennyAndDollar(int penny, int nickel, int dime, int quarter, int dollar)
{ 
	penny = penny * 1 + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
	return penny; 


}


int main()
{
  int penny , nickel, dime , quarter ,dollar ;
  
   
  ReadpiggyBankContent(penny, nickel, dime, quarter, dollar);
  cout <<" \n Your Total Money In Pennies = " << CalcpennyAndDollar(penny, nickel, dime, quarter, dollar);
  cout <<" \n Your Total Money In Dollars = " << CalcpennyAndDollar(penny, nickel, dime, quarter, dollar) / 100.0 ;


}
