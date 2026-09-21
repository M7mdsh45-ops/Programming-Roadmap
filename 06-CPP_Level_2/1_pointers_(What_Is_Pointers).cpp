
#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // 🏷️ Elements of a Variable:
    // 1. Name -> The identifier we use in code (e.g., 'a').
    // 2. Value -> The data stored inside it.
    // 3. Address -> The location in memory where the value is stored.
    // ==========================================
    int a = 10;

    cout << "The Value Of a = " << a << endl;
    cout << "The Address Of a = " << &a << endl; // Using '&' to get the memory address


    // ==========================================
    // 🔢 Pointer Basics & Its Own Address:
    // - A pointer is a variable that stores the address of another variable.
    // - 🧾 A pointer is a container in memory that stores only an address, 
    //   AND it also has its OWN address in memory (&p)!
    // ==========================================
    int* p = &a; // 'p' stores the address of variable 'a'

    cout << "Pointer Value Is (Address of a) : " << p << endl;
    cout << "The Pointer's OWN Address Is : " << &p << endl << endl; // Address of the pointer itself


    // ==========================================
    // ⚙️ Pointer in Action (Dereferencing):
    // - Any change to the value through a pointer (*) will be reflected in the original variable.
    // ==========================================
    *p = 30; // Changing the value of 'a' to 30 through the pointer
    cout << "The Value Of a (after *p = 30) = " << a << endl << endl;


    // ==========================================
    // 🔄 Runtime Flexibility:
    // - You can change the direction of the pointer to point to another variable.
    // - Why useful? It allows you to reuse the same pointer with different variables.
    // ==========================================
    int b = 50;
    p = &b; // Redirecting pointer 'p' to point to variable 'b'

    cout << "The Value Of b = " << b << endl;
    cout << "The Address Of b = " << &b << endl;
    cout << "Pointer Value (now points to b) Is : " << p << endl<<endl;

    cout << "The Pointer's OWN Address Remains The Same : " << &p << endl << endl;

    return 0;
}
	
