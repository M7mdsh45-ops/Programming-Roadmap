// roadmap_p37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

float readNums(string message)
{
	float num; 
	cout << message << endl; 
	cin >> num;
	return num;

}

float CalcSum( )
{
	
	int num = 0 , sum = 0 , counter = 1;
	do
	{   
		num = readNums(" Please enter a number " + to_string(counter));
	
		if (num == -99)
			break;
		
		sum += num;
		counter++;

	} while (num != -99);

	return sum;
}



int main()
{
	int display = CalcSum();
	cout << "\n Result = " << display << endl;
}

