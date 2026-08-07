
#include <iostream>
using namespace std;

float readNumber()
{
	float number;
	cout << " Please , Enter a Float Number : \n";
	cin >> number;
	return number;
}



float getFractionPart(float number)
{
	return number - int(number);
}


int MyRound(float number)
{
	int intPart;
	intPart = int(number);

	float fractionPart = getFractionPart(number);


	if (abs(fractionPart) >= 0.5)
	{
		if (number > 0)
		{
			return ++intPart;
		}

		else
			return --intPart;
	}

	else
		return intPart;
}


int main()
{
	float number = readNumber();

	cout << "\nMy Round Result = " << MyRound(number) << endl;
	cout << "C++ Round Result = " << round(number) << endl;

}

