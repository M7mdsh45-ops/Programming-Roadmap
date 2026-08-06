
#include <iostream>
using namespace std;


int ReadNumner()
{
	int number;
	cout << " Enter a Number : \n";
	cin >> number;
	return number;
}


int Myabs(int number)
{
	if (number < 0)
		return number * -1;


	return number;
}

int main()
{  
	int number = ReadNumner();
	cout << "\nMy abs Result = " << Myabs(number) << endl;

	cout << "C++ abs Result = " << abs(number) << endl;
}

