// roadmap-p14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
using namespace std;

void readnums(int& num1, int& num2)
{
    cout << " Please enter number 1 :  \n ";
    cin >> num1;

    cout << " Please enter number 2 : \n ";
    cin >> num2;
}


void PrintNumsBeforeSwap(int num1, int num2)
{
    cout << "\n Numbers Before Swap : \n";
    cout << " Number 1 = " << num1 << endl;
    cout << " Number 2 = " << num2 << endl;
}


void SwapNums(int &num1, int &num2)
{
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void PrintAfterSwap(int num1, int num2)
{
    cout << "\n Numbers After Swap : \n";
    cout << " Nmber 1 = " << num1 << endl;
    cout <<" Number 2 = " << num2 << endl;

}


int main()
{
    int num1, num2;

    readnums(num1, num2);
    PrintNumsBeforeSwap(num1, num2),
    SwapNums(num1, num2);
    PrintAfterSwap(num1, num2);

}





