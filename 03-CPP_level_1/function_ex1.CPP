// : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> ;
using namespace std;

void my_sum_procedure ()
{
    int num1;
    int num2;
    cout << "enter 2 numbers \n ";
    cin >> num1 >> num2;
    cout << " num1 + num2 = " << num1 + num2 << endl;

}

int my_sum_function()
{
    int num1;
    int num2;
    cout << " enter 2 nubers \n ";
    cin >> num1 >> num2;
    return  num1 + num2;

}

int main()
{
    
    my_sum_procedure();

    cout << my_sum_function() << endl;



}
