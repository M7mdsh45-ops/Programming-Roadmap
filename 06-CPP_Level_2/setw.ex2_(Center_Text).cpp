
#include <iostream>
#include <iomanip>
using namespace std;


string center(string text , int width)
{
	int padding = width - text.length();

	if (padding <= 0)
		return text;

	int padleft = padding / 2;
	int padright = padding - padleft;

	return string(padleft, ' ') + text + string(padright, ' ');
}

int main()
{

	cout << "---------|--------------------------------|---------|\n";
	cout << center("Code", 9) << "|" << center("Name", 32) << "|" << center("Mark", 9) << "|\n";
	cout << "---------|--------------------------------|---------|\n";
	

	cout << center("C101", 9) << "|" << center("Introduction To Programming 1", 32) << "|" << center("99", 9) << "|\n";
	cout << center("C102", 9) << "|" << center("Computer HardWare", 32) << "|" << center("90", 9) << "|\n";
	cout << center("C103454", 9) << "|" << center("Network", 32) << "|" << center("100", 9) << "|\n";
	cout << "---------|--------------------------------|---------|\n";

}


