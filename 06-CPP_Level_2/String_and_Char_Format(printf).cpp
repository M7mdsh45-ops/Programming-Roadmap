
#include <iostream>
using namespace std;

int main()
{
    char Name[] = "Mohamed Ahmed";
    char UniName[] = "Cairo University";

    //print string and string

    printf("Dear %s , How Are You ? \n",Name);
    printf("Welcome To %s :) \n\n",UniName);


    char c = 'S';


    printf("Setting The Width Of c : %*c \n", 1, c);
    printf("Setting The Width Of c : %*c \n", 2, c); 
    printf("Setting The Width Of c : %*c \n", 3, c);
    printf("Setting The Width Of c : %*c \n", 4, c);
    printf("Setting The Width Of c : %*c \n\n", 5, c);

}

