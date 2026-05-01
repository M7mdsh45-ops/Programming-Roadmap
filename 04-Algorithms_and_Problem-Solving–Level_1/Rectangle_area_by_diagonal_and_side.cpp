// roadmap_P16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void readnums(float& A, float & D)
{
	cout << " Please Enter Rictangle's Side Area :  \n ";
	cin >> A;

	cout << " Please Enter Rictangle's Diagonal : \n ";
	cin >> D;

}

float CalcArea(float A, float D)
{

	return A * sqrt(pow(D,2) - pow(A,2));

}

void printResults( float area)
{
	cout << "\n Rectangle's Area = " << area << endl;
}




int main()
{
	float A, D;
	readnums(A, D);
	printResults(CalcArea(A, D));

}


