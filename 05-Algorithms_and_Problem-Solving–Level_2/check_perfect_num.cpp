// roadmap_p3_lev2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void printResults(enPerfectNotPerfect perfectNotPerfect)
{
    if (perfectNotPerfect == enPerfectNotPerfect::perfect)
        cout << " The Number You Have Entered Is a Perfect Number \n ";
    else
        cout << " The Number You Have Entered Is Not a Perfect Number \n ";

}

int main()
{
    printResults(check(ReadPositiveNumber(" Please Enter a Positive Number : ")));
}
