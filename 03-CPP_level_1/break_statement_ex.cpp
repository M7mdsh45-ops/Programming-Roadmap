// break_statement_ex.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int main()
{
    
    int arr[10] = { 10 ,15 ,30 ,40 ,50, 20,70,80,90,100 };
    int searchfor = 20;

    for (int i = 0; i < 10; i++)
    {
        cout << " we ara in iteration number " << i + 1 << endl ;

        if (arr[i] == searchfor)
        {
            cout << "\n the postion of " << searchfor << " is " << i << endl;
            break;
        }

        
    }




}
