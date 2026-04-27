// roadmap_p9.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void readnum(int nums[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << " please enter number " << i + 1 << " : " << endl;
        cin >> nums[i];
    }


}


int calcSum(int nums[3])
{       
    int sum = 0;
       
    for ( int i = 0 ; i < 3 ; i++)
    {
        sum += nums[i];
    }
    
    return sum;
}


void printSum(int sum)
{
    cout << " The sum of the numbers you have entered is : " << sum << endl;

}

int main()
{
    int nums [3];
    readnum(nums);
    printSum(calcSum(nums));
}

