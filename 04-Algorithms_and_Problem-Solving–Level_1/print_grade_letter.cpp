// roadmap_p33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int readgrade( int from , int to)
{
	int grade;
	do
	{
		cout << " Please , Enter your grade : \n";
		cin >> grade;

	} while (grade < from || grade > to);

	return grade;
}


char GetGradeLetter(int grade)
{
	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
		
	else if (grade >= 70)
		return 'C';
		
	else if (grade >= 60)
		return 'D';
		
	else if (grade >= 50)
		return 'E';
		
	else 
		return 'F';
		

}


int main()
{
	int dispaly = readgrade(0, 100);
	cout << " You got " << GetGradeLetter(dispaly);

}

