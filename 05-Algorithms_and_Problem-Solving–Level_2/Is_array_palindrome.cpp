// .cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

void fillArray(int arr[], int& arrLength)
{
    cout << "Please , Enter How Many Elements : \n";
    cin >> arrLength;
    cout << endl;

    for (int i = 0; i < arrLength; i++)
    {
        cout << " Enter Element Number " << i + 1 << endl;
        cin >> arr[i];

    }

}


bool IsPalindrome(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[arrLength - i - 1] != arr[i])
        {
            return false;
        }
    }

    return true;

}

void printResults( int arr[] , int arrLength)
{   
    if (IsPalindrome(arr, arrLength))
    {
        cout << "\nYes , Array Is Palindrome . \n "; 
    }

    else
        cout << "\nNo , Array Is Not Palindrome . \n "; 
    
}


void printArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << endl;
}


int main()
{
    int arr[100];
    int arrLength;

    fillArray( arr , arrLength);

    cout << "\nArray 1 Elements : \n";
    printArray(arr , arrLength);

    printResults(arr , arrLength);
    

}

