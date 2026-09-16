
#include <iostream>
using namespace std;

int main()
{
    float PI = 3.14159265;

    printf("PI = %f \n\n", PI);

    // Precision Specification 

    printf("Precision Specification of %.*f \n", 1, PI);
    printf("Precision Specification of %.*f \n", 2, PI);
    printf("Precision Specification of %.*f \n", 3, PI);
    printf("Precision Specification of %.*f \n", 4, PI);
    printf("Precision Specification of %.*f \n\n", 9, PI); // the last 3 digits of the output is a garbage values cuz float capacity is max 7 digits in total

    float X = 7.0, Y = 9.0;
    printf("The Float Division Is : %.3f / %.3f = %.3f \n\n", X, Y, X / Y);

    double D = 12.45;
    printf("The Double Value Is %.3f \n", D);
    printf("The Double Value Is %.4f \n\n", D);


}

