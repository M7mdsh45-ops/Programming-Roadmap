// display_person's_info.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.




#include <iostream>
#include <string>
using namespace std;

struct stpersoninfo
{
	string firstname;
	string lastname;
	int age;
	string phone;

};

void readpersoninfo(stpersoninfo& info )
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


void printpersoninfo(stpersoninfo info)
{

	cout << " first name : " << info.firstname << endl;
	cout << " last name : " << info.lastname << endl;
	cout << " age : " << info.age << endl;
	cout << " phone : " << info.phone << endl;
	cout << " \n *************************\n ";

}

void readmanager(stpersoninfo person[100], int &length)

{   cout << " how many persons ? ( 1 to 100 ) \n ";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		readpersoninfo(person[i]);
		cout << "\n************************** \n ";
	}
}

void printmanager(stpersoninfo person[100] , int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "\t person " << i + 1 << endl;
		cout << "**************************\n";
		printpersoninfo(person[i]);
	}
}


int main()
{
	stpersoninfo persons[100];
		int length =0 ;

	readmanager(persons , length);
	printmanager(persons ,length);



}



