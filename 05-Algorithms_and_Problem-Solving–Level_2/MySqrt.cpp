
#include <iostream>
using namespace std;

float readNumber()
{
	float number;
	cout << " Please , Enter a Number : \n";
	cin >> number;
	return number;
}


int MySqrt(float number)
{
	return pow (number , 0.5) ;
}


int main()
{
	float number = readNumber();

	cout << "\nMy Sqrt Result = " << MySqrt(number) << endl;
	cout << "C++ Sqrt Result = " << sqrt(number) << endl;

}

