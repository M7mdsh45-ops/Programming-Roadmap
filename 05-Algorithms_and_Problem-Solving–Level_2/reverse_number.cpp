// roadmap_p7_lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


int ReverseNumber( int Number)
{   
    int reversed = 0;
    while ( Number > 0)
    {
        int M = Number % 10;
       Number /= 10;
       reversed = reversed * 10 + M;

    }
    return reversed;
}

int main()
{
   int read = ReadPositiveNumber(" Please , Enter A positive Number : ");
   cout << "\n The reversed number = " << ReverseNumber(read) << endl;
    
}

