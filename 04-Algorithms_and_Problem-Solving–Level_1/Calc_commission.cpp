// roadmap_p34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadTotalSales()
{
	int totalsales;
	cout << " Please , Enter Total Sales : \n";
	cin >> totalsales;

	return totalsales;
}

int GetCommission( int totalsales)
{
	if (totalsales > 1000000)
		return totalsales * 0.01;
	else if (totalsales >= 500000 )
		return totalsales * 0.02;
	else if (totalsales >= 100000 )
		return totalsales * 0.03;
	else if (totalsales >= 50000 )
		return totalsales * 0.05;
	else
		return totalsales * 0;
	

}


int main()
{
	int totalsales = ReadTotalSales();
	cout << "\n Your commission is " << GetCommission(totalsales);


}

