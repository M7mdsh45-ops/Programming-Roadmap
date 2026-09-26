#pragma warning(disable : 4996) // Disable compiler warnings about deprecated C functions
#include <ctime>                 // Required library for time and date functions
#include <iostream>

using namespace std;

int main()
{
    // Get the current system time in seconds since January 1, 1970
    time_t t = time(0); 

    // Convert the time seconds into a readable string format (Local Time)
    // Note: 'char*' is used because this is a legacy C function returning a C-style string.
    char* dt = ctime(&t); 
    
    // Print the local date and time
    cout << "Local date and time is: " << dt << "\n";

    // Convert the current time into a 'tm' structure formatted for UTC (Greenwich Mean Time)
    tm* gmtm = gmtime(&t);

    // Convert the UTC structure into a readable string format
    dt = asctime(gmtm);
    
    // Print the UTC date and time
    cout << "UTC date and time is: " << dt;

    return 0;
}
