// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
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



void FillArrayWith1toN (int arr[], int Number)
{

    for (int i = 0; i < Number; i++)
    {
        arr[i] = i + 1;

    }

}

void shuffleArray(int arr[] , int arrlength)
{

    for (int i = 0; i < arrlength; i++)
    {
        int index1 = randNums(0, arrlength - 1) ;
        int index2 = randNums(0, arrlength - 1) ;

        swap(arr[index1], arr[index2]);
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
    

    arrLength = ReadPositiveNumber("Please Enter Number Of Elements : ");

    FillArrayWith1toN(arr,arrLength);
   

    cout << "\nArray Elements Before Shuffle: \n";
    printArray(arr, arrLength);

    shuffleArray(arr , arrLength);

    cout << "\nArray Elements After Shuffle : \n";
    printArray(arr, arrLength);


}
