
#include <iostream>
#include <vector>
using namespace std;


// Unlike the array we should determine weather we're gonna pass the vector by Val or by Ref 
void ReadNumber(vector <int> &vnumbers)
{
	int number = 0; 
	char again = 'y';

	do
	{
		cout << "Please Enter a Number : \n";
		cin >> number;
		vnumbers.push_back(number);

		cout << "Do You Want To Store More Elements In The Vector ? ( Y/N) \n";
		cin >> again;

	} while (again == 'Y' || again == 'y');


}

// Even if you don't want to edit it it;s always better to pass the vector by Ref cuz this make the execution faster...

void PrintVectorElements(vector <int> &vnumbers)
{
	cout << "\nVector Elements : \n\n";

	for (int number : vnumbers)
	{
		cout << number << endl;
	}

	cout << endl;
}


int main()
{
	// std::vector <data type> vector name : 

	vector <int> vnumbers;

	ReadNumber(vnumbers);
	PrintVectorElements(vnumbers);


	
}

