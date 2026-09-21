#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	cout <<"a value = " << a << endl;
	cout << "a address = "<< & a << endl;

	int * p;
	p = &a;

	// Note: The pointer itself also has its OWN unique address in memory (&p)
	// cout << "Pointer's own address = " << &p << endl;

	cout << "Pointer Value = " << p << endl;

	// Dereferencing (*p): Using the asterisk (*) to go to the address 
	// and access the actual value stored inside it.
	cout << "Value of the address that p is pointing to is " << *p << endl;

	// Dereferencing (*p = 20): Modifying the value of 'a' directly through the pointer.
	*p = 20;

	cout << a << endl;

	// Dereferencing (*p): Reading the updated value of 'a' via the pointer.
	cout << *p << endl;

	a = 30;
	cout << a << endl;
	cout << *p << endl;
	cout << endl;
	return 0;
}
