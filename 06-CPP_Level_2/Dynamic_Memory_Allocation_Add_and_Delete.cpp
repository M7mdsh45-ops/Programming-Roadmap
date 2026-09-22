#include <iostream>
using namespace std;
int main()
{
// declare an int pointer
int* ptrX;
// declare a float pointer
float* ptrY;

// What is Dynamic Memory Allocation?
// It is the process of requesting memory from the system's Heap during run-time, 
// rather than compile-time. This allows variables to persist beyond local scopes 
// and lets us handle variable or unknown data sizes dynamically.
ptrX = new int;
ptrY = new float;

// assigning value to the memory
// Why? Using dereferencing (*), we go directly to the dynamically allocated 
// memory slots in the Heap to store our values (45 and 58.35).
*ptrX = 45;
// Note: The 'f' at the end of 58.35f explicitly treats the literal value as a float 
// on the right side before it's assigned, preventing unnecessary conversions.
*ptrY = 58.35f;

cout << *ptrX << endl;
cout << *ptrY << endl;

// deallocate the memory (using 'delete')
// Why? We must manually free the memory allocated by 'new' to prevent 
// Memory Leaks and ensure the system reclaims those RAM resources.
delete ptrX;
delete ptrY;
return 0;
}
