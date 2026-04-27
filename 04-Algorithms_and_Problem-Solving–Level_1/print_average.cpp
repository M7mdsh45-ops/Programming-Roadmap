// roadmap_p10.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;


int readnum(int& num1, int& num2, int& num3)
{

    cout << " please enter the first number : \n ";
    cin >> num1;
    cout << " please enter the second number : \n ";
    cin >> num2;
    cout << " please enter the third number : \n ";
    cin >> num3;

    return num1, num2, num3;

}


float calcSum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
    
}


float calcAvr(int num1 , int num2 , int num3 )
{
    float avr = calcSum (num1 , num2 , num3) / 3;
    return avr;

}


void printresult(float avr)
{
    cout << " The Average of the numbers you have entered is : " << avr << endl;

}

int main()
{
    int num1, num2, num3;
    readnum(num1, num2, num3);

    printresult(calcAvr(num1, num2, num3));
}



