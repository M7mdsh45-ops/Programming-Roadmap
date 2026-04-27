
//

#include <iostream>
using namespace std;


int readnum(int &num1 , int &num2 , int &num3)
{

    cout << " please enter the first number : \n ";
    cin >> num1;
    cout << " please enter the second number : \n ";
    cin >> num2;
    cout << " please enter the third number : \n ";
    cin >> num3;

    return num1, num2, num3;

}


int calcSum(int num1, int num2, int num3)
{
        int sum = num1 + num2 +num3 ;
        return sum;
    
}


void printSum(int sum)
{
    cout << " The sum of the numbers you have entered is : " << sum << endl;

}

int main()
{
    int num1, num2, num3;
    readnum(num1 , num2 , num3 );
    printSum(calcSum(num1,num2,num3));
}

