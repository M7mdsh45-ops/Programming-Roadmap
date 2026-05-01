// roadmap-p17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
using namespace std;

void readnums(float& a, float& h)
{
	cout << " Please Enter Triangle's Base Length :  \n ";
	cin >> a;

	cout << " Please Enter Triangle's Height : \n ";
	cin >> h;

}

float CalcArea(float a, float h)
{

	return (1.0 / 2.0) * a * h;

}

void printResults(float area)
{
	cout << "\n Triangle's Area = " << area << endl;
}




int main()
{
	float a, h;
	readnums(a, h);
	printResults(CalcArea(a, h));

}


