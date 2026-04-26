// roadmap_problems_1_to_5.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct stpersoninfo
{
	int age;
	bool driverlicence;

};

stpersoninfo readinfo ()
{
	stpersoninfo personinfo;
	cout << "please enter your age : \n";
	cin >> personinfo.age ;
	cout << " Do you have a Valid driver licence ? ( 1 for Yes , 0 for No ) \n";
	cin >> personinfo.driverlicence;
	
	return personinfo ;
}

bool checkinfo( stpersoninfo personinfo )
{    
	return (personinfo.age > 21 && personinfo.driverlicence);
}

void printresult ( bool check )
{

	if ( check )
		cout << " \n HIRED \n";
	


	else
		cout << "\n REJECTED \n ";

}

int main()
{
	printresult(checkinfo(readinfo()));

}



