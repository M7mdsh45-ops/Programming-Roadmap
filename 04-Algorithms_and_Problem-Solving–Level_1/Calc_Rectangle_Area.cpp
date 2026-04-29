// roadmap_p15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadNUmbers( float &A , float &B)
{
	cout << " Enter Rectangle's Hight : \n ";
	cin >> A;

	cout << " Enter Rectangle's Width : \n ";
	cin >> B;

}

float CalcRectangleArea(float A, float B)
{
	return A * B;
}

void PrintResults(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;

}

int main()
{
	float A, B;
	ReadNUmbers(A , B);
	CalcRectangleArea(A, B);
	PrintResults(CalcRectangleArea(A, B));

}

