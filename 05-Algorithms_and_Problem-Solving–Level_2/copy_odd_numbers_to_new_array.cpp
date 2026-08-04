
#include <iostream>
using namespace std;


int RandomNumber(int from, int to)
{
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}


int readNum()
{
    int number;
    cout << "Please Enter How Many Elements : \n";
    cin >> number;
    return number;
}

bool chechOdd(int number)
{  
    return (number % 2 != 0);
       
}

void fillArrayWithRandomNums(int arr[], int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}


void AddArrayElement(int number, int arr2[], int& arr2Length)
{
    arr2Length++;
    arr2[arr2Length - 1] = number;
}

void CopyOddNumbers(int arr[], int arr2[], int arrLength, int& arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (chechOdd(arr[i]))
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
    int arrLength;
    int arr2Length = 0;

    arrLength = readNum();

    fillArrayWithRandomNums(arr, arrLength);
    cout << "\nArray 1 Elements : \n";
    printArray(arr, arrLength);


    CopyOddNumbers(arr, arr2, arrLength, arr2Length);
    cout << "\nArray 2 Elements After Copy Only The Odd Numbers : \n";
    printArray(arr2, arr2Length);


}


