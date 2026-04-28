// data_type_convertion.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{   // double to intger 

    int num1; 
    double num2 = 20.6778 ;

    //implicit convertion 
    num1 = num2;

    //explicit convertion 
    num1 = (int)num2;

    //explicit convertion 
    num1 = int(num2);

    cout << num1 << endl;

    // string to int , double and float 

    string str = "1234.564";

    int num_int = stoi(str);
    cout << num_int << endl;

    double num_double = stod(str);
    cout << num_double << endl;

    float num_float = stof(str); 
    cout << num_float << endl;

    // convert numbers to string 
    int  num3 = 123;
    double num4 = 19.99;

    string str1, str2;

    str1 = to_string(num3);
    str2 = to_string(num4);
     
    cout << str1 << endl; 
    cout << str2 << endl;

    return 0;

}
