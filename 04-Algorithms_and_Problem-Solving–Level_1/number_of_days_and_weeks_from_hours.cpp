// roadmap_p41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


float ReadNumberOfHours()
{

    float hours;
    cout << " Please , Enter number of hours : \n ";
    cin >> hours;
    return hours;
}

float CalcNumberOfDays(float hours)
{
    return hours / 24  ;

}

float CalcNumberOfWeeks(float hours)
{
    return hours / 24 / 7;

}

int main()
{
    int readhours = ReadNumberOfHours();
    cout << " Number of days = " << CalcNumberOfDays (readhours)<< endl << endl;
    cout << " Number of weeks = " << CalcNumberOfWeeks (readhours)<< endl ;
}

