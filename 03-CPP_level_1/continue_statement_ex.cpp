// Continue_statement_ex.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{   
	int arr [5];
	int sum = 0;
	cout << " please enter 5 numbers \n ";

	for (int i = 0; i < 5; i++)
	{
	cin >> arr[i];
	}

	for (int i = 0 ; i < 5 ; i++)
	{

		 if (arr[i] > 50)
		 {
			 continue;
		 }
		 sum += arr[i];

	}
	  
	cout << " the sum of the numbers less than or equal 50 is : " << sum << endl;

}
