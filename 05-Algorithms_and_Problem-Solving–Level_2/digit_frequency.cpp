// roadmap_p8_lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int num;

    do
    {
        cout << Message << endl;
        cin >> num;
    } while (num <= 0);

    return num;
}


int ReverseNumber(  int num , int DigitToCheck)
{
    int frequencycount = 0;
    while (num > 0)
    {
        int M = num % 10;
        num /= 10;
       
        if (M == DigitToCheck)
            frequencycount++;
    }
    return frequencycount;
}

int main()
{
    
   int num =  ReadPositiveNumber(" Please , Enter A Number : ");
   int digit =  ReadPositiveNumber(" Please , Enter A Digit To Check : ");
   cout << "\n Digit " << digit << " Frequency is " << ReverseNumber(num , digit) << " Time(s) . " << endl;

}


