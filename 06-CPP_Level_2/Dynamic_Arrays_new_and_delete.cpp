
#include <iostream>
using namespace std;


int main()
{

    int num; 
    cout << "Please , Enter Total Numbers Of Students ? \n";
    cin >> num;


    float* ptr;

    //// memory allocation of num number of floats
    ptr = new float[num];

    cout << "\nEnter Grades Of Students : \n\n";

    for (int i = 0; i < num; i++)
    {

        cout << "Student " << i + 1 << ": ";
        cin >> *(ptr + i);

    }


    cout << "\nDisplaying Grades Of Student : \n\n";

    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << " Grade : " << *(ptr + i) << endl;

    }


    // ptr memory is released
    delete[] ptr;
}

