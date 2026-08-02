// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;



int randNums(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}


void swap(int& A, int& B)
{
    int temp;

    temp = A;
    A = B;
    B = temp;

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



void FillArrayWithRandomNums(int arr[], int Number)
{

    for (int i = 0; i < Number; i++)
    {
        arr[i] = randNums(1,100);

    }

}

void CopyArrayInReverseOrder(int arr[] ,int arr2[], int arrlength)
{
    int count = arrlength - 1 ;
    for (int i = 0; i < arrlength; i++)
    {
       arr2[i] = arr[count];

       count--;
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


int main()
{
    srand((unsigned)time(NULL));

    int arrLength;
    int arr[100];
    int arr2[100];


    arrLength = ReadPositiveNumber("Please Enter Number Of Elements : ");

    FillArrayWithRandomNums(arr, arrLength);


    cout << "\nArray 1 Elements : \n";
    printArray(arr, arrLength);

    CopyArrayInReverseOrder(arr,arr2,arrLength);

    cout << "\nArray 2 Elements After Copying Array 1 In Reverse Order : \n";
    printArray(arr2, arrLength);


}
