// te.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>   
using namespace std; 

int ReadPositiveNumber(string Message)
{
    int Number = 0;  
    do
    {
        cout << Message << endl; 
        cin >> Number;           
    } while (Number <= 0);       

    return Number;  

}


void readArray(int arr[100] , int &arryLength)
{
    cout << " Enter Number Of Elements : \n ";
    cin >> arryLength;
    cout << " Enter Array Elements : \n";

    for (int i = 0; i < arryLength; i++)
    {
        cout << " Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
        cout << endl;

}


void printArray(int arr[100], int arryLength)
{
    for (int i = 0; i < arryLength; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}


int timesRepeated( int numberToCheck , int arr[100], int arryLength)
{
    int count = 0; 

    for (int i = 0; i < arryLength; i++)
    {
        if (numberToCheck == arr[i])
            count ++;

    }

    return count;
}

int main()
{
    int arr[100];
    int arrLength;
    int numberToCheck;


    readArray(arr , arrLength);

    numberToCheck = ReadPositiveNumber("Enter The Number To Check");

    cout << "\nOriginal Array ";
    printArray(arr, arrLength);

    cout << numberToCheck << " Is Repeated " << timesRepeated(numberToCheck, arr, arrLength) << " Time(s) \n";

}
