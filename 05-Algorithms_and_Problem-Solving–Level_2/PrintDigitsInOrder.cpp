// roadmap_p10_lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintDigitsInOrder(int Number)
{
    int Remainder = 0;


    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;

    }
}
int main()
{

     PrintDigitsInOrder(ReverseDigits(ReadPositiveNumber(" Please Enter A positive Number : ")));

}
