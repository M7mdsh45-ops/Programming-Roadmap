// .cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;



void fillArray(int arr[], int& arrLength)
{
    arrLength = 10;

    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;

}


short findNumberPositionInArray(int number, int arr[], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == number)
            return i;
    }

    return -1;
}

bool IsNumberInArray(int number , int arr[], int arrLength)
{
    return  findNumberPositionInArray(number, arr, arrLength) != -1;
}
 


void AddArrayElement(int number, int arr2[], int& arr2Length)
{
    arr2Length++;
    arr2[arr2Length - 1] = number;
}


void CopyDistinctNumbersToArray(int arr[], int arr2[], int arrLength, int& arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (!IsNumberInArray(arr[i], arr2, arr2Length))
        {
            AddArrayElement(arr[i], arr2, arr2Length);
        }

    }

}


void printArray(int arr[], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << endl;
}


int main()
{
    srand((unsigned)time(NULL));


    int arr[100];
    int arr2[100];
    int arrLength = 0;
    int arr2Length = 0;

    fillArray(arr, arrLength);

    cout << "\nArray 1 Elements : \n";
    printArray(arr, arrLength);


    CopyDistinctNumbersToArray(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 2 Distinct Elements : \n";
    printArray(arr2, arr2Length);


}


