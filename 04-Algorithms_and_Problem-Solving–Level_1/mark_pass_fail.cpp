// roadmap_p8.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum enpassfail { pass = 1 , failed = 2  };

int readmark ()
{
    int mark;
    cout << " please enter your mark : \n ";
    cin >> mark;
    return mark;
}

enpassfail checkmark ( int mark)
{
    
     
    if (mark >= 50)
        return  enpassfail::pass;
    else
        return enpassfail::failed;

}

void printResult(int mark)
{
    if (checkmark(mark) == enpassfail::pass)
        cout << "\n You passed \n ";

    else
        cout << " \n You failed \n ";

}

int main()
{
    printResult(readmark());
}

