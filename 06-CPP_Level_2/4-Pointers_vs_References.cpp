#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	
	// Reference (Alias): A reference is a second name or nickname for the 
	// same variable residing in the exact same memory slot. Once assigned, 
	// it cannot be reassigned to another variable.
	int& x = a;
	
	cout << &a << endl;
	
	// Because 'x' is an alias, its address is identical to 'a's address.
	cout << &x << endl;
	
	cout << a << endl;
	cout << x << endl;
	
	// Pointer: A pointer is a different name (variable) that has its own 
	// place in memory and stores the address of another variable in another slot.
	int* p = &a;
	
	cout << p << endl;
	
	// Dereferencing (*p): Accessing the value stored at the address 'p' points to.
	cout << *p << endl;
	
	int b = 20;
	
	// Pointer (Joker): Unlike a reference, a pointer can be redirected/reassigned 
	// at run-time to point to another variable of the same type.
	p = &b;
	
	cout << p << endl;
	cout << *p << endl;
	return 0;
}
