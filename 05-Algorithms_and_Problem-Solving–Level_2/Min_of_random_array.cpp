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
        cout << "Array Elements : ";

        for (int i = 0; i < Number; i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
    }

    int MinNumberInArray(int arr[], int Number)
    {
        int MinNum = arr[0];

        for (int i = 0; i < Number; i++)
        {
            if (MinNum > arr[i])
            {
                MinNum = arr[i];
            }

        }

        return MinNum;
    }

    int main()
    {
        srand((unsigned)time(NULL));

        int arr[100];
        int arrLength;
        
        arrLength = ReadPositiveNumber("Please Enter Number Of Elements : ");

        FillArrayWithRandomNumbers(arr, arrLength);

        printArray(arr, arrLength);

        cout << "\nMin Number Is : " << MinNumberInArray(arr, arrLength) << endl;


    }



