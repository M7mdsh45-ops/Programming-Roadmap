
#include <iostream>
#include <vector>
using namespace std;


struct stEmployee 
{
    string FirstName;
    string LastName;
    float Salary;
};


int main()
{
    
    vector <stEmployee> vEmployees;

    stEmployee TempEmployee;

    TempEmployee.FirstName = "Mohamed";
    TempEmployee.LastName = "Ahmed";
    TempEmployee.Salary = 3000;
    vEmployees.push_back(TempEmployee);

    TempEmployee.FirstName = "Ali";
    TempEmployee.LastName = "Mohamed";
    TempEmployee.Salary = 2000;
    vEmployees.push_back(TempEmployee);


    TempEmployee.FirstName = "Aya";
    TempEmployee.LastName = "Amr";
    TempEmployee.Salary = 1500;
    vEmployees.push_back(TempEmployee);

    for (stEmployee &Employee : vEmployees)
    {

        cout << "First Name : " << Employee.FirstName << endl;
        cout << "Last Name : " << Employee.LastName << endl;
        cout << "Monthly Salary : " << Employee.Salary << " $ \n";
        cout << "--------------------------------\n";
    }

    cout << endl;
}

