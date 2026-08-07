
#include <iostream>
using namespace std;

float readNumber()
{
	float number;
	cout << " Please , Enter a Number : \n";
	cin >> number;
	return number;
}


int MyFloor(float number)
{
	int intPart;
	intPart = int(number);
	
	if (number >= 0 )
		return intPart;
	
	if (number != intPart)
		return intPart - 1;

	else
		return intPart;
	
}


int main()
{
	float number = readNumber();

	cout << "\nMy Floor Result = " << MyFloor(number) << endl;
	cout << "C++ Floor Result = " << floor(number) << endl;

}

