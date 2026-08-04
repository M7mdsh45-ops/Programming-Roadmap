// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


enum enYesOrNo { yes = 1 , no = 0 };


int readNum()
{
	int number;
	cout << "\nPlease Enter a Number : ";
	cin >> number;
	return number;
}

void inputUserNumber(int arr[] , int &arrLength)
{
	enYesOrNo check ;

	do
	{
		arr[arrLength] = readNum();
		arrLength++;
		cout << "\nDo you want to add more numbers ? [0]-> No , [1]-> Yes : ";
		int input; // declared inside the loop to be destroyed after the loop is finshed.
		cin >> input;
		check = (enYesOrNo)input;

	} while (check == enYesOrNo::yes);

}

void printArray(int arr[], int arrLength)
{
	cout << "\nArray length = " << arrLength << endl;

	cout << "Array elements : ";
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";

	}

	cout << endl;

}


int main()
{
	int arr[100];
	int arrLength = 0;
	
	inputUserNumber(arr, arrLength);
	printArray(arr , arrLength);
	
}

