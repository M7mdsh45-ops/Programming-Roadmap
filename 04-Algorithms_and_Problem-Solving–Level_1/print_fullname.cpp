// roadmap_problem_6_to_10.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct stinfo
{
    string firstname;
    string lastname;

};

stinfo readinfo ()
{
    stinfo info;
    cout << " Please enter your first name : \n ";
    cin >> info.firstname;

    cout << " Please enter your last name : \n ";
    cin >> info.lastname;

    return info;
}

string getfullname( stinfo info , bool Reversed)
{  
    string fullname = " ";
    
    if (Reversed)
     fullname = info.lastname + " " +  info.firstname;

    else 
     fullname = info.firstname + " " +  info.lastname;

    return fullname;

}

void printinfo(string fullname)
{
    cout << "\n Your fullname is : " << fullname << "\n";

}

int main()
{
    printinfo(getfullname(readinfo(),true));
}

