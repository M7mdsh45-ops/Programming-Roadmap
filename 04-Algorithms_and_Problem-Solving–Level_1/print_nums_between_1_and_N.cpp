// roadmap_p.cpp : This file contains the 'main' function. Program execution begins and ends there.
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



void printNumsFrom1ToN(int N)
{
    cout << "\n The Numbers In Range : \n";

    for (int i = 1; i <= N; i++)
        cout << i << endl;

}

int main()
{
    printNumsFrom1ToN(readNum());
}

