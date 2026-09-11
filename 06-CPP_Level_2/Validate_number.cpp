// Number_Validation

#include <iostream>
using namespace std;


int ReadNumber()
{
	int number ;

	cout << "Please Enter a Number : \n";
	cin >> number;

	while (cin.fail())
	{
		cin.clear();

		cin.ignore(std::numeric_limits<std::streamsize>::max() , '\n');

		cout << "Invalid Input , Please Enter A Number \n";
		cin >> number;

	}

	return number;
}


int main()
{
	int number = ReadNumber();
	cout << "\nYour Number Is : " << number << endl;

}

