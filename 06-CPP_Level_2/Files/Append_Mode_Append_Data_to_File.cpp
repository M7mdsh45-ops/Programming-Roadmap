#include <iostream>
#include <fstream> 

using namespace std;

int main() {
    
    fstream MyFile;

    
    MyFile.open("MyFile.txt", ios::out | ios::app); //append Mode 

    
    if (MyFile.is_open())
    {
        
        MyFile << "Hi, this is the first line\n";
        MyFile << "Hi, this is the second line\n";
        MyFile << "Hi, this is the third line\n";

        //append
        MyFile << "Mohamed\n";
        MyFile << "Ahmed\n";

        MyFile.close();
    }

    return 0;
}
