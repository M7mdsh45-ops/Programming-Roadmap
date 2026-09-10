

#include <iostream>
#include "MyLib.h"
#include "MyInput.h"

using namespace std ;


int main()
{
	
	MyLib::test();

	cout << MyLib::MySum(10, 5);

	int num = MyInput::readNum();
	cout << "\nThe Number you have entered is " <<  num << endl ;

}

