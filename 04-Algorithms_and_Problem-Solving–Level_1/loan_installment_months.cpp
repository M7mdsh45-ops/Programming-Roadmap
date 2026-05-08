// roadmap_p47 

#include<iostream>
using namespace std;



void readLoanAmountAndMonthlyPayment(int &loanamount,int  &monthlypayment)
{

	cout << " Please , Enter Loan Amount : \n ";
	cin >> loanamount;

	cout << " Please , Enter Monthly Payment : \n ";
	cin >> monthlypayment;

}


float neddedMonths(int loanamount, int monthlypayment)
{
	return (float)loanamount / monthlypayment ;
}

void printResults (int monthsneeded)
{

	cout << "\n Months needed to settle the loan is " << monthsneeded << " Months \n ";

}


int main()
{
	int loanamount, monthlypayment;

	readLoanAmountAndMonthlyPayment(loanamount, monthlypayment);

	printResults(neddedMonths(loanamount, monthlypayment));
		
}
