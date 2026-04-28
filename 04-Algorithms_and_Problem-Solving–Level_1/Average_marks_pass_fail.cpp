// roadmap_p11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


enum enpassfail { pass = 1 , fail = 2 };

void readmarks(int& mark1, int& mark2, int& mark3)
{
    cout << "Please enter the first mark : \n ";
    cin >> mark1;

    cout << "Please enter the second mark : \n ";
    cin >> mark2;

    cout << "Please enter the third mark : \n ";
    cin >> mark3;

}

float calcAvr (int mark1, int mark2, int mark3)
{
    return (mark1 + mark2 + mark3) / 3.0;

}

 enpassfail checkAvr ( float avr )
{
     if (avr >= 50)
         return enpassfail::pass;
     else
         return enpassfail::fail;

}

void printResults( float avr )
{   
    cout << "\n Your Average is : " << avr << endl;

    if (checkAvr(avr) == enpassfail::pass)
        cout << " \n Congrats , You Passed ! \n ";
    else
        cout << "\n Sorry , You Failed \n ";

}



int main()
{
    int mark1, mark2, mark3;

    readmarks(mark1, mark2, mark3);
    printResults(calcAvr(mark1, mark2, mark3));
}


