// testttt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


string readPassword()
{

	string password;
	cout << " Enter a Password : \n ";
	cin >> password;
	return password;
}


void GuessPassword( string password)
{
	string word = "";
	int count = 1;

	for (int i = 65 ; i <= 90 ; i++)
	{
		
	    
		for (int j = 65 ; j <= 90; j++ )
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				cout << " Trial [" << count << "] : " << word << endl;

				if (password == word)
				{
					cout << "\n\n Password Is " << word << endl;
					cout << " Found After " << count << " Trial(s) \n ";
					return;
				}
				
				word = "";
				count++;
			}
		 
		}
			
	}

}


int main()
{
	
	GuessPassword(readPassword());

}

