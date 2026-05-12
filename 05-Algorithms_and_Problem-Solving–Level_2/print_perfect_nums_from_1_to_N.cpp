// roadmap_p4_lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum enPerfectNotPerfect { perfect = 1 , notperfect = 2 };

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


enPerfectNotPerfect check(int num)
{
    int sum = 0;
    int M =  num / 2;
    for ( int i = 1 ; i <=  M ; i ++ )
    {
        if (num % i == 0)
            sum += i;

    }

    if (sum == num)
        return enPerfectNotPerfect::perfect;

    else
        return enPerfectNotPerfect::notperfect;
}

void printPerfectNumsFrom1ToN(int num)
{
    cout << "\n The Perfect Numbers From 1 To " << num << " Are :\n";
    for (int i = 1; i <= num; i++)
    {
        if (check(i) == enPerfectNotPerfect::perfect)
            cout << i << endl;
    }
}

int main()
{
    printPerfectNumsFrom1ToN(ReadPositiveNumber(" Please Enter a Positive Number : "));
}
