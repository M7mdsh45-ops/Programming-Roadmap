// .cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>   
#include <string>     
#include <cstdlib>    
#include <ctime>      

using namespace std;  


enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };


int RandomNumber(int From, int To)
{
    
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SamallLetter:
    {
        
        return char(RandomNumber(97, 122));
        break; 
    }
    case enCharType::CapitalLetter:
    {
        
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter:
    {
       
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        
        return char(RandomNumber(48, 57));
        break;
    }
    }
  
    return '\0';
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


string GenerateWord(enCharType CharType, short Length)
{
    string Word;  

    
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}


string GenerateKey()
{
    string Key = "";

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    return Key;

}


void FillArrayWithKeys(string arr[], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
        arr[i] = GenerateKey();


}


void printStringArray(string arr[] , int arrlength )
{
    cout << "\nArray Elements : \n\n";

    for (int i = 0; i < arrlength; i++)
    {
        cout << "Array[" << i << "] : ";
        cout << arr[i] << "\n";
    }

    cout << endl;

}


int main()
{ 
    srand((unsigned)time(NULL));

    string arr[100];
    int arrlength = 0;

    arrlength = ReadPositiveNumber("Please enter how many keys to generate?");

    FillArrayWithKeys(arr, arrlength);
    printStringArray(arr, arrlength);

    return 0;
}

