// Function_Recursion_ex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printNumbers(int N , int M)
{

	
	if (N <= M)                        // base case
	{
		cout << M << endl ;

		printNumbers(N, M - 1);        // recursuion ( The fuction calls itself )
	}


}



int main()
{

	printNumbers(1 , 5);


}
