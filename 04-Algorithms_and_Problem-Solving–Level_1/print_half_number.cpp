// roadmap_p7.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int readnum ()
{
	int num;
	cout << " Please enter a number : \n ";
	cin >> num;
	return num;

}

float calcHalfnum ( int num)
{   
	float half  = num / 2.0;
	return  half;
}

void printresult( float half)
{
	cout << " \n The half of your number is : " << half << endl;
}


int main()
{
	printresult(calcHalfnum(readnum()));

}

