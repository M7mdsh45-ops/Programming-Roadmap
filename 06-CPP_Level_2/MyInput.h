#pragma once


#include <iostream>

using namespace std;

namespace MyInput
{

	int readNum()
	{
		int num;

		cout << "\n\nPlease enter a number \n\n";
		cin >> num;

		return num;
	}
}
