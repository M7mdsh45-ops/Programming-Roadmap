#include <iostream>
using namespace std;

float readNumber()
{
	float number;
	cout << " Please , Enter a Number : \n";
	cin >> number;
	return number;
}


int MyCeil(float number)
{
	int intPart;
	intPart = int(number);
	
	if (number == intPart )
		return intPart;
	
	if (number > 0)
		return intPart + 1;


    return intPart;	
}


int main()
{
	float number = readNumber();

	cout << "\nMy Ceil Result = " << MyCeil(number) << endl;
	cout << "C++ Ceil Result = " << ceil(number) << endl;

}

