// roadmap_p2_lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.





#include <iostream>
#include <string>
using namespace std;


enum enPrimeNotPrime { prime = 1, notprime = 2 };

int ReadPositiveNum(string message)
{
	int num;
	do
	{

		cout << message << endl;
		cin >> num;

	} while (num <= 0);
	return num;

}

enPrimeNotPrime check(int num)
{
	if (num < 2)
		return enPrimeNotPrime::notprime;

	int M = round(num / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (num % counter == 0)
			return enPrimeNotPrime::notprime;

	}
	return enPrimeNotPrime::prime;

}

void printPrimeNumsFrom1ToN(int num)
{
	cout << " \n";

	cout << "Prime Numbers From " << 1 << " To " << num << " Are :" << endl;

	for (int i = 1; i <= num; i++)
	{
		if (check(i) == enPrimeNotPrime::prime)
			cout << i << endl;

	}
	
}

int main()
{

	printPrimeNumsFrom1ToN(ReadPositiveNum("Please , Enter a positive number : "));
}

