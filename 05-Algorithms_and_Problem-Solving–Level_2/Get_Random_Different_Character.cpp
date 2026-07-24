// .cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int randNums( int from , int to)
{
	int Rand = rand() % (to - from + 1) + from ;

	return Rand;

}

enum enCharType
{
	SmallLetter = 1,
	CapitalLetter = 2,
	SpecialCharacter = 3,
	Digit = 4

};

char GetRandomCharacter( enCharType charType)
{
	switch (charType)
	{
	case enCharType::SmallLetter :
		{
			return char(randNums(97, 122));	
		}

	case enCharType::CapitalLetter : 
		{
			return char(randNums(65, 90));		
		}

	case enCharType::SpecialCharacter: 
		{
			return char(randNums(33, 47));
		}

	case enCharType::Digit :
		{
			return char(randNums(48, 57));
		}
	}

	return 0;
}


int main()
{
   
	srand((unsigned)time(NULL));

	cout << GetRandomCharacter( enCharType::SmallLetter) << endl;
	cout << GetRandomCharacter( enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter( enCharType::SpecialCharacter) << endl;
	cout << GetRandomCharacter( enCharType::Digit) << endl;
		
}


