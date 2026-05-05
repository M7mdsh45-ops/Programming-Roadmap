// roadmap_p40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float readBillValue()
{
    float billvalue;
    cout << " Please , Enter Bill Value : \n ";
    cin >> billvalue; 
    return billvalue;
}

float CalcServiceFees(float billvalue)
{ 
     float servicefees =  billvalue * 0.1;
     float salestax = (billvalue + servicefees) * 0.16;

     float totalbill = billvalue + servicefees + salestax;
     return  totalbill;
       
}



void printTotalBill(float totalbill)
{
    cout << " \n Total Bill After Service Fee And Sales Tax = " << totalbill << endl;
}
int main()
{
    printTotalBill(CalcServiceFees(readBillValue()));
}


