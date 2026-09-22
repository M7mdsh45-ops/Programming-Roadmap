#include <iostream>
using namespace std;

int main()
{
	// Void Pointer (void*): A general-purpose pointer that can hold 
	// the address of any data type (int, float, double, etc.).
	void* ptr;

	int a = 10;
	ptr = &a; // Storing the address of an integer

	cout << ptr << endl; // Prints the memory address

	// Dereferencing a void pointer directly is NOT allowed because C++ doesn't know its data type.
	// We must use static_cast to cast it back to its original type (int*) before dereferencing.
	cout << *(static_cast<int*>(ptr)) << "\n\n";


	float b = 10.5;
	ptr = &b; // Reusing the void pointer to store the address of a float

	cout << ptr << endl; // Prints the memory address

	// Casting the void pointer to (float*) before dereferencing to get the correct value
	cout << *(static_cast<float*>(ptr)) << endl;

	return 0;
}
