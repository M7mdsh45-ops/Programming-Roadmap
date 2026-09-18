
#include <iostream>
#include <vector> // Required library to use vectors (Dynamic Arrays)
using namespace std;

int main()
{
    // Declaring and initializing a vector of integers.
    // A vector is a dynamic array that can automatically resize itself (grow or shrink) 
    // at runtime, unlike standard arrays which have a fixed size.
    vector <int> vnumbers = { 1, 2, 3, 4, 5 };

    cout << " Vector Numbers : ";

    // Ranged-based for loop to iterate through the vector elements easily.
    // Note: Using a reference (&) like 'int &number' is preferred for larger data types 
    // to make execution faster (avoids copying each element). 
    // Without '&', the program still works fine, but it makes a copy of each element.
    for (int number : vnumbers)
    {
        cout << number << " ";
    }

    cout << endl;

    return 0;
}
