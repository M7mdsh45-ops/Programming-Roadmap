#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Initialize a vector of integers with 5 elements
    vector<int> num{ 1, 2, 3, 4, 5 };

    // Declare an iterator for the integer vector to traverse through its elements
    vector<int>::iterator iter;

    // Loop through the vector:
    // - iter = num.begin(): Starts at the first element (1)
    // - iter != num.end(): Stops when reaching .end() (which points to a dummy position *after* the last element,
    // NOT the last element itself)
    // - iter++: Moves to the next element in each iteration
    for (iter = num.begin(); iter != num.end(); iter++)
    {
        // Dereference the iterator (*iter) to get and print the value at the current position
        cout << *iter << "  ";
    }

    // Print a new line at the end of the output
    cout << endl;

    return 0;
}
