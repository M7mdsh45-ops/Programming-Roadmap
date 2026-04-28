// array_of_structure_include_functions.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std ;

struct stpersoninfo
{
	string firstname;
	string lastname;
	int age;
	string phone;

};

void readpersoninfo(stpersoninfo &info)
{
	cout << " please enter first name \n ";
	cin >> info.firstname;

	cout << " please enter last name \n ";
	cin >> info.lastname;

	cout << " please enter your age \n ";
	cin >> info.age;

	cout << " pleas enter your phone number \n ";
	cin >> info.phone;

}


void printpersoninfo (stpersoninfo info)
{
	cout << "\n *********************** \n ";

	cout << " first name : " << info.firstname << endl;
	cout << " last name : " << info.lastname << endl;
	cout << " age : " << info.age << endl;
	cout << " phone : " << info.phone << endl;
	cout << " \n *************************\n ";

}

void readmanager(stpersoninfo person [2])
{
	readpersoninfo(person[0]);
	readpersoninfo(person[1]);

}

void printmanager(stpersoninfo person[2]) 
{
	printpersoninfo(person[0]);
	printpersoninfo(person[1]);
}


int main()
{
	stpersoninfo persons [2];

	readmanager(persons);
	printmanager(persons);



}

