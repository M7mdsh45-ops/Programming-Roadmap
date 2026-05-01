// roadmap_p24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>   
#include <string>     
#include <cmath>      
using namespace std;  

int readAge()
{
    int age;
    cout << " Please enter your Age ( From 18 To 45 ): \n ";
    cin >> age;
    return age;
}
 
bool ReadNumberInRange(int age , int from , int to )
{
    return (age >= from && age <= to);
}
 
int ReadUntilNumberBtween( int FROM , int TO)
{
    int age = 0;

    do 
    {
        age = readAge();

    } while (!ReadNumberInRange(age, FROM, TO));

    return age;
}


void PrintResults (int age)
{

    cout << " Your Age Is " << age << endl;
}


int main()
{
    PrintResults(ReadUntilNumberBtween(18,45));

}

    





    

   
