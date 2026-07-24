// te.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;


int randNums( int from , int to)
{
	int Rand = rand() % (to - from + 1) + from ;

	return Rand;
}

int ReadPositiveNumber()
{
	int Number = 0;  
	{
		cout << " Pleaes enter how many keys to generate?" << endl;
		cin >> Number;           
	} while (Number <= 0);       
	return Number;
}

string generateKey()
{
	string letter = "";

	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
		   letter += char(randNums(65, 90));
		}

		if (i < 4)
		{
			letter += "-";
		}
	}

	return letter;
}


int main()
{
   
	srand((unsigned)time(NULL));

	int num = ReadPositiveNumber();
	for (int i = 1; i <= num; i++)
	{
		cout << " Key [" << i <<"] : " << generateKey() << endl;

	}


	
}


