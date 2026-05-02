// roadmap_p30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadPositiveNum( string message)

{
    int num; 
    do
    {
        cout << message << endl;
        cin >> num;

    } while (num < 0);
   
    return num;
}



int CalcFactorial(int num)
{
    int fact = 1;
    for (int i = num; i >= 1; i--)
        fact *= i;
    cout << " \n Factorial of " << num << " = " << fact << endl;
    return fact;

}


int main()
{
     CalcFactorial(ReadPositiveNum(" Enter a positive number : "));
}

