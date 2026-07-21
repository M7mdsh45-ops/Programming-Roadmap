// random.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std ;


int RandomNum(int from , int to )
{
	int randNum = rand() % ( to - from + 1 ) + from; 
	return randNum;

}


int main()
{ 
	srand((unsigned)time(NULL));

	cout << RandomNum( 1 , 10) << endl;
	cout << RandomNum( 1 , 10) << endl;
	cout << RandomNum( 1 , 10) << endl;
		
}

