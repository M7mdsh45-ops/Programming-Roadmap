// roadmap_p24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>   
#include <string>     
#include <cmath>      
using namespace std;  

int readAge()
{
    int age;
    cout << " Please enter your Age : \n ";
    cin >> age;
    return age;
}
 
bool ReadNumberInRange(int age , int from , int to )
{
    return (age >= from && age <= to);
}
 

void PrintResults (int age)
{
    if (ReadNumberInRange(age, 18, 45))
        cout << "\n" << age << " Is a valid Age \n ";
    else 
        cout << "\n" << age << "  Is an invalid Age \n ";

}
int main()
{

    PrintResults(readAge());


}

    





    

   
