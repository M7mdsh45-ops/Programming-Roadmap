// roadmap_p31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int readnum()
{
	int num;
	cout << " Enter a number : \n";
	cin >> num;
	return num;
}

void printPowsOfNum(int num )
{
	cout << num << " Power 2 = " << num * num << endl;
	cout << num << " Power 3 = " << num * num * num << endl;
	cout << num << " Power 4 = " << num * num * num * num << endl;
	

}

int main()
{
	printPowsOfNum(readnum());
}

