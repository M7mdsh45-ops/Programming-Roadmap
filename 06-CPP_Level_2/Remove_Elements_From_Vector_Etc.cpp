#include <vector>
#include <iostream>
using namespace std;

int main()
{
    // Declare a vector to store a collection of integers
    vector <int> vNumbers;

    // Add elements to the end of the vector one by one
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
	
    // Print the current size of the vector (will be 5)
    cout << "Stack Size = " << vNumbers.size() << endl << endl;

    // Remove elements from the end of the vector one by one (5 times)
    // After this, the vector will be completely empty with a size of 0
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
	
    // Safety check: Ensure the vector is not empty before attempting to pop
    // This prevents undefined behavior when trying to remove from an empty vector
    if ( !vNumbers.empty() )
        vNumbers.pop_back();

    // Alternative safety check: Verify that the size is greater than 0 before popping
    if ( vNumbers.size() > 0)
        vNumbers.pop_back();

    // Instead of using pop_back() one by one, 
    // you can simply use clear() to delete all elements at once
    vNumbers.clear();

    // Print the size of the vector after clearing it completely (will be 0)
    cout << "Stack Size = " << vNumbers.size() << endl << endl;

    // Range-based for loop to print vector elements (nothing will print here as the vector is empty)
    cout << "Vector Numbers : \n";
    for (int& number : vNumbers)
    {
        cout << number << endl;
    }

    cout << "\n";
}
