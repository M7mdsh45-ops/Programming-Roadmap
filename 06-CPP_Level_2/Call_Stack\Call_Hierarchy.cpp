
#include <iostream>
using namespace std;

// Function definitions
void Function4()
{
	cout << "Hi I'm function4 " << endl;
} // 1. Finished first: Function4 is popped off the Call Stack (First Out)

void Function3()
{
	Function4(); // Function4 is pushed to the top of the Call Stack (Last In)
} // 2. Finished second: Function3 is popped off next

void Function2()
{
	Function3();
} // 3. Finished third: Function2 is popped off next

void Function1()
{
	Function2();
} // 4. Finished fourth: Function1 is popped off next

int main() 
{
	// LIFO (Last In, First Out) Concept in Call Stack:
	// - Push Order (In) : main -> Function1 -> Function2 -> Function3 -> Function4
	// - Pop Order (Out) : Function4 -> Function3 -> Function2 -> Function1 -> main
	
	Function1();

	return 0;
} // 5. Finished last: main is popped off and execution ends
