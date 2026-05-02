// roadmap_p29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enOddOrEven { odd = 1 , even = 2 };

int readNum()
{
    int number;
    cout << " Please enter a number : \n";
    cin >> number;
    return number;
}



enOddOrEven CheckOddOrEven(int number)
{
    if (number % 2 != 0)
        return enOddOrEven::odd;
    else
        return enOddOrEven::even;
}


int CalcSumOfEvenNumsFrom1ToN(int N)
{
    int sum = 0;

    cout << " The sum of even numbers in range = ";
    for (int counter = 1; counter <= N; counter++)
    {
        if (CheckOddOrEven(counter) == enOddOrEven::even)
            sum += counter;
    }
   
    return sum;
}

int main()
{
   cout << CalcSumOfEvenNumsFrom1ToN(readNum());
     
}

