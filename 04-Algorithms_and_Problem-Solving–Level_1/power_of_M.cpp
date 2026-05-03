// roadmap_p31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int readnum()
{
	int num;
	cout << " Enter a number : \n";
	cin >> num;
	return num;
}

int readPow()
{

	int power;
	cout << " Enter the power : \n";
	cin >> power;
	return power;

} 

int PowOfNum(int power , int num)
{
	  if (power == 0)
		 return 1;
	

      int P = 1 ;
      for ( int counter = 1 ; counter <= power ; counter++)
	  { 
			P *= num;
	  }
	  return P;
}

void PrintResults(int P)
{
	cout << " Result = " << P << endl;

}
int main()
{
	PrintResults(PowOfNum(readPow(),readnum()));

}

