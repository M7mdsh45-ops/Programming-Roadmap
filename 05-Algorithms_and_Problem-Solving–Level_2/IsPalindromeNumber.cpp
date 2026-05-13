// roadmap_p11_lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message  )
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}


int ReverseDigits(int Number)
{
    cout << "\n";
    int M = 0;
    int num2 = 0;
    while (Number > 0)
    {
        M = Number % 10;
        Number /= 10;
        num2 = num2 * 10 + M;
    }

    return num2;
}

bool IsPalindromeNumber( int Number)
{
    return Number == ReverseDigits(Number);
}


int main()
{
    
    if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number?")))
        cout << "\nYes , it is a Palindrome number.\n";  
    else
        cout << "\nNo , it is NOT a Palindrome number.\n";
        
}
