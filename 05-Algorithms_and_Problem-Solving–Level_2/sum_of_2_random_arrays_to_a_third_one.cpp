// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;


int randNums(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}



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


void FillArrayWithRandomNumbers(int arr[], int Number)
{
    for (int i = 0; i < Number; i++)
    {
        arr[i] = randNums(1, 100);

    }


}

void printArray(int arr[], int Number)
{

    for (int i = 0; i < Number; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sumOf2Array(int arr[], int arr2[], int arr3 [] ,int Number)
{

    for (int i = 0; i < Number; i++)
    {
        arr3[i] = arr[i] + arr2[i];
    }   
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arr2[100];
    int arr3[100];
    int arrLength;

    arrLength = ReadPositiveNumber("Please Enter Number Of Elements : ");

    FillArrayWithRandomNumbers(arr, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);

    sumOf2Array(arr, arr2, arr3, arrLength);

    cout << "\nArray 1 Elements : \n";
    printArray(arr, arrLength);

    cout << "\nArray 2 Elements : \n";
    printArray(arr2, arrLength);

    cout << "\nSum Of Array 1 And Array 2 Elements =  \n";
    printArray(arr3, arrLength);


}


