// Function_Recursion_ex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int printNumbers(int N , int pow)
{

	
	if (pow == 0)                        // base case
	{
		return 1;    
	}


	return N * printNumbers(N , pow - 1);

}



int main()
{

	cout << printNumbers(2 , 4) << endl;


}
