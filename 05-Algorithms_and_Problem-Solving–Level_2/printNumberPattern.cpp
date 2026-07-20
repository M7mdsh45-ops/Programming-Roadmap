// testttt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int readNum(string message)
{
	int num = 0 ;

	do
	{
		cout << message << endl;
		cin >> num ;

	} while (num <= 0);
	
	return num;
}

void printNumberPattern ( int num)
{
	for (int i = 65 ; i <= 65 + num - 1 ; i++)
	{
		
	    
		for (int j = 65 ; j <= i ; j++ )
		{
			cout << char(i);
	
		}
		
		cout << endl;
	}


}



int main()
{
	
	
	printNumberPattern(readNum(" enter a num : "));


}

