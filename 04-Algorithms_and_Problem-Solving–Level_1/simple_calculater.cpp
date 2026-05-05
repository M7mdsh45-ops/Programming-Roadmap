// roadmap_p36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enOperationType { add = '+', subtract = '-', multiply = '*' , divide = '/' };

float readNums(string message)
{
	float num = 0;
	cout << message << endl;

	cin >> num;
	return num;

}

enOperationType ReadOPtype()
{
	char OT = '+';

	cout << " Please , Enter Operation Type ( + , - , * , / ) \n";
	cin >> OT;

	return (enOperationType) OT;

}

float Calculate(float num1, float num2 , enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::add:
		return num1 + num2;
	case enOperationType::subtract:
		return num1 - num2;
	case enOperationType::multiply:
		return num1 * num2;
	case enOperationType::divide:
		return num1 / num2;

	}


}


int main()
{
	float num1 = readNums("Please , Enter The First Number ");
	float num2 = readNums("Please , Enter The Second Number ");

	enOperationType optype = ReadOPtype();

	cout << endl << " Result = " << Calculate( num1 , num2 , optype) << endl;

}

