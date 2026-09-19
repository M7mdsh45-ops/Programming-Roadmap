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

    // Returns a reference to the first element in the vector
    cout << "First Element: " << vNumbers.front() << endl;

    // Returns a reference to the last element in the vector
    cout << "Last Element: " << vNumbers.back() << endl;

    // Returns the number of elements currently present in the vector
    cout << "Size: " << vNumbers.size() << endl;

    // Returns the total number of elements that the vector can hold before needing to allocate more memory
    cout << "Capacity : " << vNumbers.capacity() << endl;

    // Returns 1 (true) if the vector is empty, or 0 (false) if it contains elements
    cout << "Empty : " << vNumbers.empty() << endl;

    return 0;
}
