// roadmap_p5_lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}


void PrintDigits( int Number)
{
    cout << "\n";
    while ( Number > 0)
    {
        int M = Number % 10;
        cout << M << endl;

       Number /= 10;
    }

}

int main()
{
    
    PrintDigits(ReadPositiveNumber(" Please Enter A positive Number : "));

}

