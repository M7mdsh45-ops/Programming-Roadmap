// roadmap_p21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>   
#include <string>     
#include <cmath>      

using namespace std;  


void ReadTriangleData(float& A, float& B, float& C)
{
    cout << "Please enter triangle side A ? " << endl;
    cin >> A;

    
    cout << "Please enter triangle base B ? " << endl;
    cin >> B;
    
    cout << "Please enter triangle side C ? " << endl;
    cin >> C;
}


float CircleAreaByATriangle(float A, float B, float C)
{
    const float PI = 3.141592653589793238;  

    float P = ( A + B + C ) / 2.0 ;

    float Area = PI * pow((A * B * C)/(4 * sqrt (P * (P - A ) * (P - B) * (P - C))), 2);
    

    return Area;  
}


void PrintResult(float Area)
{
   
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    float A, B, C;  

    
    ReadTriangleData(A, B, C);
    
    PrintResult(CircleAreaByATriangle(A, B, C));

    return 0; 
}




    

   
