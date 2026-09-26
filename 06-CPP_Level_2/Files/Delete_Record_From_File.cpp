#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
using namespace std;


void LoadDataFromFile(string filename , vector<string> &vFileContent)
{
    fstream MyFile;

    MyFile.open(filename, ios::in);

    if (MyFile.is_open())
    {
        string line;

        while (getline(MyFile, line))
        {
            vFileContent.push_back(line);
        }

        MyFile.close();
    }
}

void SaveVectorToFile(string filename, vector<string> vFileContent)
{
    fstream MyFile;

    MyFile.open(filename, ios::out);

    if (MyFile.is_open())
    {
        for (string& line : vFileContent)
        {
            if (line != "")
            {
                MyFile << line << endl;

            }
        }

        MyFile.close();
    }

}

void DeleteRecordFromFile(string filename, string record)
{
    vector <string> vFileContent;
    LoadDataFromFile(filename, vFileContent);

    for (string& line : vFileContent)
    {
        if (line == record)
        {
            line = "";
        }
    }

    SaveVectorToFile(filename, vFileContent);
}

void PrintFileContent(string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }
        MyFile.close();
    }
}

int main() 
{
    cout << "File Content Before Delete : \n\n";
    PrintFileContent("MyFile.txt");

    DeleteRecordFromFile("MyFile.txt", "Ali");
    
    cout << "\n\nFile Content After Delete : \n\n";
    PrintFileContent("MyFile.txt");
   

}
