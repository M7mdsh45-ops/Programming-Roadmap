// .cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
using namespace std;


enum enPrimeNotPrime { prime = 1 , notprime = 2 };


enPrimeNotPrime check (int Number)
{
    if ( Number <= 1 )
        return enPrimeNotPrime::notprime;

    int m = round (Number / 2);

    for (int i = 2; i <= m; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::notprime;

    }

    return enPrimeNotPrime::prime;
}


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

void copyOnlyThePrimeNums( int arr[], int arrLength , int arr2[], int &arr2Length)
{
    int counter = 0; 

    for (int i = 0; i < arrLength; i++)
    {
        if (check(arr[i]) == enPrimeNotPrime::prime)
        {
            arr2[counter] = arr[i];
            counter++; 
        }
    }

    arr2Length = counter;
}

void printArray(int arr[], int Number)
{
    for (int i = 0; i < Number; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    int arr2[100];
    int arr2Length = 0 ;

    arrLength = ReadPositiveNumber("Please Enter Number Of Elements : ");

    FillArrayWithRandomNumbers(arr, arrLength);

    copyOnlyThePrimeNums(arr, arrLength, arr2, arr2Length);

    cout << "\nArray 1 Elements :\n";

    printArray(arr, arrLength);


    cout << "\nPrime Numbers In Array 2 :\n";

    printArray(arr2, arr2Length);


}



