// read_and_print_name.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string readname()
{
    string name;
    cout << " Please enter your name " << endl;
    getline(cin, name);
    return name;
}



void printname( string name)
{
    cout << " Your name is " << name << endl;
}


int main()
{
    printname(readname());
}
