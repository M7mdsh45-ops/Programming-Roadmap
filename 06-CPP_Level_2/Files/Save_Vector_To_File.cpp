#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
using namespace std;


void SaveVectorToFile(string fileName , vector<string> & vFileContent)
{
    fstream MyFile;

    MyFile.open(fileName, ios::out);



    if (MyFile.is_open())
    {
       

        for (string &line : vFileContent)
        {
            if (line != "")
            {
                MyFile << line << endl;

            }
        }

        MyFile.close();
    }

}

int main() 
{
    vector<string> vFileContent = { "Ali" , "Mohamed" , "Amr" ,"Galal" };

    SaveVectorToFile("MyFile.txt" , vFileContent);


}
