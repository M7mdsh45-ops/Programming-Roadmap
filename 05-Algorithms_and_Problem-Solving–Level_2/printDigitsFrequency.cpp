// roadmap_p9_lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.


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


int ReverseNumber(int num, int DigitToCheck)
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

void printDigitsFrequency(int num)
{
    cout << " \n";

    for (int i = 1; i < 10; i++)
    {
        int digitFreq = ReverseNumber(num, i);

        if (digitFreq > 0)
        {
            cout << " Digit " << i << " Frequency Is " << digitFreq << " Time(s) \n";
        }

    }


}

int main()
{

    int num = ReadPositiveNumber(" Please , Enter A Number : ");
   
    printDigitsFrequency(num);

}

