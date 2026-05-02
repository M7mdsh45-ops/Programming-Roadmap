// roadmap_p27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int readNum()
{
    int N;
    cout << " Please enter a number : \n";
    cin >> N;
    return N;
}



void printNumsFromNTo1(int N)
{
    cout << "\n The Numbers In Range : \n";

    for (int i = N; i >= 1; i--)
        cout << i << endl;

}

int main()
{
    printNumsFromNTo1(readNum());
}

