// roadmap_p13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

void readnums(int& num1, int& num2 , int &num3)

{
    cout << " Please enter the first number : \n";
    cin >> num1;

    cout << " Please enter the second number : \n";
    cin >> num2; 

    cout << " Please enter the third number : \n";
    cin >> num3;

}




int checkMaxnum(int num1, int num2, int num3)
{
    if (num1 > num2)
        if (num1 > num3)
            return num1;
        else
            return num3;

    else
        if (num2 > num3)
            return num2;
        else
            return num3;
}

void printResults(int max)
{
    cout << "\n The MAX Number is : " << max << endl;
}


int main()
{
    int num1, num2 , num3;

    readnums(num1, num2 ,num3);
    printResults(checkMaxnum(num1, num2 , num3));
}



