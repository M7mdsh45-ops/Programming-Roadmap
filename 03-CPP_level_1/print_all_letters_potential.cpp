// print_all_character_potentials.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{ 
	for (int i = 'A'; i <= 'Z'; i++)
	{
		cout << "ALL potentials for " << char(i) << "\n \n";

		for (int j = 'A'; j <= 'Z'; j++)
		{
			cout << char(i) << char(j) << "\n";

		}
		cout << "\n------------------------------------- \n";


    }




}

