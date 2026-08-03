// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
        arr[i] = randNums(1, Number);

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

void searchForNum(int arr[] , int arrlength ,int NumTosearch)
{
    cout << "\nThe Number You Are Looking For Is : " << NumTosearch << endl;

    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] == NumTosearch)
        {
            cout << "The Number Found At Position : " << i << endl;
            cout << "The Number Found Its Order : " << i + 1 << endl;
            return;
        }

    }

       cout << "Sorry ! The Number Is Not Found :( \n";
   
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    int NumTosearch;

    arrLength = ReadPositiveNumber("Please Enter Number Of Elements : ");

    
    FillArrayWithRandomNumbers( arr,arrLength);
   
    cout << "\nArray 1 Elements : \n";
    printArray(arr, arrLength);

    NumTosearch = ReadPositiveNumber("\nPlease Enter A Number To Search for : ");
    
    searchForNum(arr , arrLength , NumTosearch);
  


}


