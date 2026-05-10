// roadmap_p1_level2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

void PrintTableHeader()
{
	cout << " \n \t\t\t\t Multiplication Table From 1 To 10 \n\n ";

	for (int header = 1; header <= 10; header++)
	{
		cout << "\t" << header;
	}

}

void printMultiplicationTable()
{
	PrintTableHeader();


	cout << "\n_____________________________________________________________________________________ \n";

	for (int vertical = 1; vertical <= 10; vertical++)
	{
		cout << setw(2) << vertical << "  |  " ; 

			for (int counter = 1; counter <= 10; counter++)
			{
				cout<<"\t" << vertical * counter;
			
			}

		cout << endl;
	}


}


int main()
{
	printMultiplicationTable();
}

