// roadmap_p38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


enum enPrimeNotPrime { prime = 1 , notprime = 2};

int ReadPositiveNum( string message)
{
	int num; 
	do
	{

	cout << message << endl ;
	cin >> num;

	} while ( num <= 0 );
	return num;

}

enPrimeNotPrime check(int num)
{
	if (num < 2)
		return enPrimeNotPrime::notprime;

	int M = round (num / 2 );

	for (int counter = 2; counter <= M; counter++)
	{
		if (num % counter == 0)
			return enPrimeNotPrime::notprime;

	}
			return enPrimeNotPrime::prime;

}

void printresults( int num)
{
	switch (check(num)) 
	{
	case enPrimeNotPrime::prime :
		cout << " The number is a prime number \n";
		break;

	case enPrimeNotPrime::notprime :
		cout << " The number is not a prime number \n";
		break;

	}
}
int main()
{

	printresults(ReadPositiveNum("Please , Enter a positive number : "));
}


