// roadmap_p50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>   
using namespace std;  


string ReadPinCode()
{
    string PinCode;  

    
    cout << "\nPlease enter PIN code \n";
    cin >> PinCode;

    return PinCode;  
}


bool Login()
{
    string PinCode;  
    int counter = 3;
   
    do
    {   
        counter--;
        
        PinCode = ReadPinCode(); 

        if (PinCode == "1234")  
        {
            return true;  
        }
        else
        {
            system("color 4F"); 
            cout << "\nWrong PIN ,You have " << counter << " more tries " << "\n";  
        }

    } while (PinCode != "1234" && counter > 0);  

    return false;  
}


int main()
{
    
    if (Login())
    {
        system("color 2F");
        cout << "\nYour account balance is " << 7500 << '\n';
    }

    else
        cout << "\nYour Card Got Blocked , Visit The Bank ASAP \n ";
    return 0; 
}
