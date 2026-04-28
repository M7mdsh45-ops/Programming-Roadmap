// roadmap_p12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void readnums(int& num1, int& num2)

{
    cout << " Please enter the first number : \n";
    cin >> num1;

    cout << " Please enter the second number : \n";
    cin >> num2;

}




int checkMaxnum ( int num1 ,int num2 )
{
    if (num1 > num2)
        return num1;

    else
        return num2;
}

void printResults(int max)
{
    cout << "\n The MAX Number is : " << max << endl;
}


int main()
{
    int num1, num2;

    readnums(num1, num2);
    printResults(checkMaxnum(num1 , num2));
}

