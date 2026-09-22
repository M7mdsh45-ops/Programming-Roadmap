#include <iostream>
using namespace std;

struct stEmployee
{
	string name;
	int salary;

};


int main()
{
	
	stEmployee Employee, *ptr;
	
	Employee.name = "Mohamed Ahmed";
	Employee.salary = 5000;

	cout << "Name : " << Employee.name << endl;
	cout << "Salary : " << Employee.salary << endl;
	cout << "\n-------------------\n";

	ptr = &Employee;


	cout << "\nUsing Pointer : \n";
	cout << "Name : " << ptr->name << endl; //(*ptr).Name  == ptr->Name
	cout << "Salary : " << ptr->salary << endl;

    // To Print Address :
	cout << "Name : " << &ptr->name << endl;
}
