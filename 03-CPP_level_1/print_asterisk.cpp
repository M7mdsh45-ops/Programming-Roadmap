// print_asterisk.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    for (int i = 10 ; i >= 1 ; i --)
    {
        for (int j = 1 ; j <= i ; j++)
        {
            cout << "*";
        }
        cout << "\n";

    }



}
