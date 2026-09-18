
#include <iostream>
#include <vector>
using namespace std;


struct stEmployee 
{
    string FirstName = " ";
    string LastName = " ";
    float Salary = 0.0;
};


void ReadEmployees(vector <stEmployee>& vEmployees)
{
    stEmployee tempEmployee;
    char moreEmployees = 'y';

    cout << "Please , Enter Employee's Info ... \n\n";

    while (moreEmployees == 'Y' || moreEmployees == 'y')
    {
        cout << "Enter First Name : ";
        cin >> tempEmployee.FirstName ;

        cout << "Enter Last Name : ";
        cin >> tempEmployee.LastName;

        cout << "Enter Salary : ";
        cin >> tempEmployee.Salary;
        
        vEmployees.push_back(tempEmployee);

        cout << "\n\nDo You Want To Add More Employees ? ( Y/N ) ";
        cin >> moreEmployees;

        cout << "\n\n";
    }
}


void PrintVector(vector <stEmployee> &vEmployees)
{
    cout << "Empoyees Vector : \n\n";

    for (stEmployee &Employee : vEmployees)
    {

        cout << "First Name : " << Employee.FirstName << endl;
        cout << "Last Name : " << Employee.LastName << endl;
        cout << "Monthly Salary : " << Employee.Salary << " $ \n";
        cout << "\n----------------------------\n\n";
    }

    cout << endl;

}


int main()
{
    
    vector <stEmployee> vEmployees;

    ReadEmployees(vEmployees);
    PrintVector(vEmployees);

}

