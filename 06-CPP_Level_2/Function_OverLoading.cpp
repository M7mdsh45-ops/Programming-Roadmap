#include <iostream>
using namespace std;

// 1. دالة لجمع رقمين من نوع double

double MySum(double a, double b) {
    return (a + b);
}

// 2. دالة لجمع رقمين من نوع int

int MySum(int a, int b) {
    return (a + b);
}

// 3. دالة لجمع 3 أرقام من نوع int

int MySum(int a, int b, int c) {
    return (a + b + c);
}

// 4. دالة لجمع 4 أرقام من نوع int

int MySum(int a, int b, int c, int d) {
    return (a + b + c + d);
}

// 5. دالة لجمع 5 أرقام من نوع int

int MySum(int a, int b, int c, int d, int e) {
    return (a + b + c + d + e);
}

int main() {

    cout << MySum(10, 20) << endl;          // تختار الدالة رقم 2
    cout << MySum(10.1, 20.1) << endl;      // تختار الدالة رقم 1
    cout << MySum(10, 20, 30) << endl;      // تختار الدالة رقم 3
    cout << MySum(10, 20, 30, 40) << endl;  // تختار الدالة رقم 4

    return 0;
}
