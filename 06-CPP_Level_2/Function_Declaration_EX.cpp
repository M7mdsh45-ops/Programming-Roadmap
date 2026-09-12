#include <iostream>
using namespace std;

// Declarations فوق الـ main

void FunctionA(int count);
void FunctionB(int count);

int main() 
{
    FunctionA(4);
    return 0;
}

// Definitions بعد الـ main

void FunctionA(int count) 
{
    if (count <= 0) return;
    cout << "A: " << count << endl;
    FunctionB(count - 1);
}

void FunctionB(int count) 
{
    if (count <= 0) return;
    cout << "B: " << count << endl;
    FunctionA(count - 1);
}
