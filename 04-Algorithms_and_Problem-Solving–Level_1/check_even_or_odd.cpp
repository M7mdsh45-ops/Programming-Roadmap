// roadmap_problems_1_to_5.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


enum ennumbertype {even = 1 , odd = 2};

int readnumber()
{
    int number;
    cout << " Please enter a number : \n ";
    cin >> number;
    return number;

}

ennumbertype checknumbertype(int number)
{
    int result = number % 2;
    if (result == 0)
        return ennumbertype::even;


    else
        return ennumbertype::odd;
    

}

void printnumbertype( ennumbertype numbertype)
{
    if (numbertype == ennumbertype::even)
        cout << " The number you have entered is Even \n ";
    
    else 
        cout << " The number you have entered is Odd \n ";
       
}




int main()
{
    
    printnumbertype(checknumbertype(readnumber()));

}

