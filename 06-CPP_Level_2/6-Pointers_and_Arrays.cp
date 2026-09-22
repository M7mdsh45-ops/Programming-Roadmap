#include <iostream>
using namespace std;

int main()
{
	// Each element of the array has its own sequential address in memory
	int arr[4] = { 10, 20, 30, 40 };
	
	int* ptr;
	
	// The array name 'arr' acts as a pointer to the first element (&arr[0])
	ptr = arr;

	// Note: C++ treats pointers and arrays almost the same way! 
	// Behind the scenes, bracket notation (ptr[i] or &ptr[i]) is just syntax sugar 
	// for pointer arithmetic (*(ptr + i) or ptr + i).

	// Pointer arithmetic guide:
	// ptr     is equivalent to &arr[0]
	// ptr + 1 is equivalent to &arr[1] (moves forward by sizeof(int))
	// ptr + 2 is equivalent to &arr[2]
	// ptr + 3 is equivalent to &arr[3]

	cout << "Addresses Are : \n\n";
	cout << ptr << endl;       // Prints address of arr[0] (or &ptr[0])
	cout << ptr + 1 << endl;   // Prints address of arr[1] (or &ptr[1])
	cout << ptr + 2 << endl;   // Prints address of arr[2] (or &ptr[2])
	cout << ptr + 3 << endl;   // Prints address of arr[3] (or &ptr[3])
	
	cout << "\nValues Are : \n\n";
	cout << *(ptr) << endl;     // Dereferencing to get value at arr[0] (or ptr[0])
	cout << *(ptr + 1) << endl; // Dereferencing to get value at arr[1] (or ptr[1])
	cout << *(ptr + 2) << endl; // Dereferencing to get value at arr[2] (or ptr[2])
	cout << *(ptr + 3) << endl; // Dereferencing to get value at arr[3] (or ptr[3])

	return 0;
}
