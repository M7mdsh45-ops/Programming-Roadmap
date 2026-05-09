// roadmap_p49.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


enum enTrueOrFalse { truee = 1 , falsee = 0  };

int ReadPin(string message)
{
    int pin = 0;

    do
    {
        cout << message << endl;
        cin >> pin ;

    } while (pin < 0);

        return pin;

}

enTrueOrFalse CheckPin(int pin)
{
    if (pin == 1234)
        return enTrueOrFalse::truee;

    else
        return enTrueOrFalse::falsee;

}

void PrintBalance( enTrueOrFalse trueorfalse)
{
    int balance = 7500;
   
        while (trueorfalse == enTrueOrFalse::falsee)
        {
         int input = ReadPin(" Wronge PIN , Please try again \n ");
         trueorfalse = CheckPin(input);
        }
    
        cout << " \n Balance = " << balance << endl;

}


int main()
{
   
    PrintBalance(CheckPin(ReadPin(" Please , Enter PIN \n ")));

}

