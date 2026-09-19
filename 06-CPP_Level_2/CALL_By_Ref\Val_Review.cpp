#include <iostream>
using namespace std;

// 1. Function for Pass by Value example
void FunctionPassByValue(int x)
{
    // This is "Pass by Value": 
    // The function receives a COPY of the variable, not the original.
    // Modifying 'x' here only affects the local copy.
    x++;
}

// 2. Function for Pass by Reference example
void FunctionPassByReference(int &x)
{
    // This is "Pass by Reference":
    // The ampersand (&) makes 'x' a reference to the original variable.
    // Any changes made here will directly affect the original variable.
    x++;
}

int main()
{
    // ==========================================
    // DEMO 1: Pass by Value
    // ==========================================
    int a = 10;
    
    // Call the function and pass 'a' by value
    FunctionPassByValue(a);
    
    // 'a' will still remain 10 because only the copy was incremented inside the function
    cout << "a after Pass by Value = " << a << endl;


    // ==========================================
    // DEMO 2: Pass by Reference
    // ==========================================
    int c = 10;
    
    // Call the function and pass 'c' by reference
    FunctionPassByReference(c);
    
    // 'c' will now become 11 because the function modified the original variable directly
    cout << "c after Pass by Reference = " << c << endl;


    // ==========================================
    // DEMO 3: Memory Address (Reference Operator)
    // ==========================================
    int b = 20;
    
    // Print the value stored inside the variable 'b'
    cout << "Value of b = " << b << endl;
    
    // Print the memory address of variable 'b' using the address-of operator (&)
    // This shows where 'b' is physically stored in the computer's memory (RAM)
    cout << "Address/Reference of b = " << &b << endl;

    return 0;
}
