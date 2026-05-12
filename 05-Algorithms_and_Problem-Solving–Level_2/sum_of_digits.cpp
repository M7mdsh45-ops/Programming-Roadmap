// roadmap_p6_lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


int calcSumOfDigits( int Number)
{   
    int sum = 0;
    while ( Number > 0)
    {
        int M = Number % 10;
       Number /= 10;
        sum += M;

    }
    return sum;
}

int main()
{
   int read = ReadPositiveNumber(" Please , Enter A positive Number : ");
    cout << "\nSum Of Digits = " << calcSumOfDigits(read) << endl ;
    
}

