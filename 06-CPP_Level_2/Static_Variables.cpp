
#include <iostream>
using namespace std;

void MyFunc()
{
    static int number = 1 ;

// A regular local variable is temporary — its lifetime ends as soon as the function exits.
    // → When you call the same function again, the variable gets created from scratch.
    // But a static variable is initialized only once.
    // When the function is called again, the compiler does not run the initialization line a second time.
    // And keep the variable value in memory for the lifetime of the program.
    // Note:-static variable is still local in scope(you can’t access it outside the function).

    cout << "The Value Of The Number : " << number << endl;

    number++ ;
}
int main()
{
    MyFunc();
    MyFunc();
    MyFunc();
}


