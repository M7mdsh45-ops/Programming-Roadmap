#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    
    // Declare 'x' as a reference (alias) to 'a'
    // Now 'x' and 'a' share the exact same memory location and value
    int& x = a;

    // Both will print the exact same memory address
    cout << "Address of a: " << &a << endl;
    cout << "Address of x: " << &x << endl << endl; // Identical address!

    // Both will print the current value, which is 10
    cout << "Value of a: " << a << endl;
    cout << "Value of x: " << x << endl << endl;

    // Changing the value through reference 'x'
    x = 20;

    // Both 'a' and 'x' will now reflect the new value (20)
    cout << "Value of a after changing x: " << a << endl;
    cout << "Value of x: " << x << endl << endl;

    // Changing the value through original variable 'a'
    a = 30;

    // Both 'a' and 'x' will now reflect this change as well (30)
    cout << "Value of a: " << a << endl;
    cout << "Value of x after changing a: " << x << endl << endl;

    return 0;
}
