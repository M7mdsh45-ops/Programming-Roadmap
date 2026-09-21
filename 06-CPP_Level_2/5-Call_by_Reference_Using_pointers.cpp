#include <iostream>
using namespace std;

// Function using References (Pass by Reference)
void swapUsingRef(int& a, int& b)
{
	int temp;
	temp = a; 
	a = b;
	b = temp;
}

// Function using Pointers (Pass by Pointer)
void swapUsingPointers(int *a, int *b)
{
	int temp;
	temp = *a; // Dereferencing to get the value
	*a = *b;   // Dereferencing to change the value at the address
	*b = temp;
}

int main()
{
	int a = 1, b = 2;

	// Swap Using Reference.
	cout << "Before Swapping ( Call By Ref )" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swapUsingRef(a, b);

	cout << "\nAfter Swapping " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << "\n";

	cout << "\n----------------\n\n";

	// Swap Using Pointers.
	cout << "Before Swapping ( Call By pointer )" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// Passing the addresses of 'a' and 'b' to the pointer function
	swapUsingPointers(&a, &b);

	cout << "\nAfter Swapping " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << "\n";

	return 0;
}
