#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num{ 1, 2, 3, 4, 5 };

    // ==========================================
    // Exception Handling Process Starts Here
    // Note: Excessive use of try-catch is considered a bad practice 
    // because it can slow down the program's performance.
    // ==========================================

    // Try block: Encloses code that might cause a runtime error or exception.
    try
    {
        // Attempting to access an invalid index (5) using .at(), 
        // which throws an out_of_range exception when an error occurs.
        cout << num.at(5); 
    }
    // Catch block (...) : Catches any thrown exception to handle the error 
    // and prevent the program from crashing.
    catch (...)
    {
        // Fallback action or error message executed when an exception is caught.
        cout << "Out Of Bound \n";
    }

    return 0;
}
