
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

bool chechPositive(int number)
{
    return (number >= 0);

}

void fillArrayWithRandomNums(int arr[], int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(-100, 100);
}



short CountPositiveNumbers(int arr[], int arrLength)
{
    int count = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (chechPositive(arr[i]))
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

    cout << "\nPositive Numbers Count = " << CountPositiveNumbers(arr, arrLength) << endl;

}

