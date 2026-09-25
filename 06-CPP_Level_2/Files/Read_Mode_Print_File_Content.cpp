#include <iostream>
#include <fstream> // Required for file handling operations
#include <string>  // Required for string manipulation and getline()

using namespace std;

// Function to read and print the content of a file line by line
void PrintFileContent(string FileName)
{
    // Declare a file stream object
    fstream MyFile;

    // Open the specified file in read mode (ios::in)
    MyFile.open(FileName, ios::in);

    // Check if the file is successfully opened before reading
    if (MyFile.is_open())
    {
        string line;

        // Read the file line by line:
        // getline(MyFile, line) reads an entire line from the file and stores it in 'line'.
        // It continues looping (returns true) until it reaches the end of the file (EOF),
        // at which point it returns false and stops the while loop.
        while (getline(MyFile, line))
        {
            // Print each line to the console
            cout << line << endl;
        }

        // Close the file to free system resources
        MyFile.close();
    }
}

int main()
{
    // Call the function and pass the file name to read its content
    PrintFileContent("myfile1.txt");

    return 0;
}
