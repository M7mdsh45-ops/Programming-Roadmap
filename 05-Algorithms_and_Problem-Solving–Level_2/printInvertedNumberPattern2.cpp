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

void printInvertedNumberPattern ( int num)
{
	for (int i = 1 ; i <= num  ; i++)
	{
		
	    
		for (int j = 1 ; j <= i ; j++ )
		{
			cout << i;
	
		}
		
		cout << endl;
	}


}



int main()
{
	
	
	printInvertedNumberPattern(readNum(" enter a num : "));


}

