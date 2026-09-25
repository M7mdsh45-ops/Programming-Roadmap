#include <iostream>
#include <fstream> // Required for file handling operations

using namespace std;

int main() {
    // Declare a file stream object named MyFile
    fstream MyFile;

    // Open the file "MyFile.txt" in write mode (ios::out)
    // Note: ios::out creates the file if it doesn't exist, or overwrites it if it does.
    MyFile.open("MyFile.txt", ios::out);

    // Safety check: ensure the file is successfully opened before writing
    if (MyFile.is_open())
    {
        // Write lines of text into the file just like using cout
        MyFile << "Hi, this is the first line\n";
        MyFile << "Hi, this is the second line\n";
        MyFile << "Hi, this is the third line\n";

        // Close the file to save changes and free system resources
        MyFile.close();
    }

    return 0;
}
