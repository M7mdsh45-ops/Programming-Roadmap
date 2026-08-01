// .cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;




    int randNums( int from , int to)
    {
        int randNum = rand() % (to - from + 1 ) + from; 
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

    
    void FillArrayWithRandomNumbers(int arr[] , int Number)
    {
        for (int i = 0; i < Number; i++)
        {
            arr[i] = randNums(1, 100);

        }
        
    } 

    void printArray(int arr [] , int Number)
    {
        for (int i = 0; i < Number; i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
    }

    void copyArray(int arr[], int Number , int arr2[])
    {

        for (int i = 0; i < Number; i++)
            arr2[i] = arr[i];
        
    }

    int main()
    {
        srand((unsigned)time(NULL));

        int arr[100];
        int arr2[100];
        int arrLength;
        
        arrLength = ReadPositiveNumber("Please Enter Number Of Elements : ");

        FillArrayWithRandomNumbers(arr, arrLength);

        cout << "\nArray 1 Elements :\n";

        printArray(arr, arrLength);

        copyArray(arr, arrLength,arr2 );
        
        cout << "\nArray 2 Elements After Copy:\n";

        printArray(arr2, arrLength);
    }



