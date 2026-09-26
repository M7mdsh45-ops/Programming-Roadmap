#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
using namespace std;


void LoadDataFromFileToVector(string fileName , vector<string> &vFillContent)
{
    fstream MyFile;

    MyFile.open(fileName, ios::in);



    if (MyFile.is_open())
    {
        string line;

        while (getline(MyFile, line))
        {
            vFillContent.push_back(line);
        }

        MyFile.close();
    }

}

int main() 
{
    vector<string> vFillContent;

    LoadDataFromFileToVector("myfile1.txt" , vFillContent);

    for (string& line : vFillContent)
    {
        cout << line << endl;
    }

}
