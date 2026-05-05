// roadmap_p39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void readTotalBillAndcashPaid(float & totalBill , float &cashpaid)
{
	cout << " Please enter totaL bill : \n";
	cin >> totalBill; 

	cout << " Please enter cash paid  : \n";
	cin >> cashpaid; 

}

float CalcRemainder(float totalBill, float cashpaid)
{
	float remainder = cashpaid - totalBill;

	return remainder; 
}

void Printremainder(float remainder )
{
	cout << " The remainder = " << remainder << endl;
}
int main()
{
	float totalBell, cashPaid;

	readTotalBillAndcashPaid(totalBell , cashPaid);
	Printremainder(CalcRemainder(totalBell, cashPaid));
}

