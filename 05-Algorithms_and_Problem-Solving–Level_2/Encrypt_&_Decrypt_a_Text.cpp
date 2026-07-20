// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string> 

string readText()
{

	string Text;
	cout << " Enter a Text : \n ";
	getline(cin , Text);
	return Text;
}

string EncryptText (string Text , int encryptionkey)
{
	
	for (int i = 0; i < Text.length(); i++)
	{

		Text[i] = char((int)Text[i] + encryptionkey);

	}
	
	return Text;

}


string DecryptText(string Text, int encryptionkey)
{

	for (int i = 0; i < Text.length(); i++)
	{

		Text[i] = char((int)Text[i] - encryptionkey);

	}

	return Text;


}

int main()
{
	int encryptionKey = 2;

	string textAfterEncryption, textAfterDecryption;

	string text = readText();

	textAfterEncryption = EncryptText( text , encryptionKey);
	textAfterDecryption = DecryptText(textAfterEncryption, encryptionKey);


	cout << " Text Before ENCRYPTION : " << text << endl;
	cout << " Text After ENCRYPTION : " << textAfterEncryption << endl;
	cout << " Text After DECRYPTION : " << textAfterDecryption << endl;


}
