
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

bool chechEven(int number)
{
    return (number % 2 == 0);

}

void fillArrayWithRandomNums(int arr[], int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}



short CountEvenNumbers(int arr[], int arrLength)
{
    int count = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (chechEven(arr[i]))
            count++;
    }

    return count;
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
    int arrLength;
    

    arrLength = readNum();

    fillArrayWithRandomNums(arr, arrLength);
    cout << "\nArray Elements : \n";
    printArray(arr, arrLength);

    cout << "\nEven Numbers Count = " << CountEvenNumbers(arr, arrLength) << endl;
   

}

