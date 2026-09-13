#include <iostream>
using namespace std;

// Recursive function to print numbers from N to M
void PrintNumbersFromNtoM(int N, int M)
{
    // Base Case & Execution Guard: Continue only while N is less than or equal to M
    if (N <= M)
    {
        // Action: Print the current value of N
        cout << N << endl;

        // Recursive Step: Call the function with N incremented by 1
        // This brings us one step closer to making the condition (N <= M) false
        PrintNumbersFromNtoM(N + 1, M);
    }
    // Base Case Exit: When N becomes greater than M, the condition fails 
    // and the function returns (stops making further recursive calls)
}

int main() {
    // Initial Call: Start printing numbers from 1 to 10
    PrintNumbersFromNtoM(1, 10);

    return 0;
}
