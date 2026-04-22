#include <iostream>
using namespace std;

/*
=====================================================
        C++ OPERATORS - COMPLETE REFERENCE
=====================================================

Operators are symbols used to perform operations on variables.

Types covered in this program:
1. Arithmetic Operators     (+, -, *, /, %)
2. Relational Operators     (==, !=, >, <, >=, <=)
3. Logical Operators        (&&, ||, !)
4. Assignment Operators     (=, +=, -=, *=, /=)
5. Unary Operators          (++ , --)
6. Bitwise Operators        (&, |, ^, ~, <<, >>)

=====================================================
*/


// 1. Arithmetic Operators Function
void arithmetic(int a, int b) {
    cout << "\n=== Arithmetic Operators ===\n";
    cout << "a + b = " << a + b << endl;   // Addition
    cout << "a - b = " << a - b << endl;   // Subtraction
    cout << "a * b = " << a * b << endl;   // Multiplication
    cout << "a / b = " << a / b << endl;   // Division
    cout << "a % b = " << a % b << endl;   // Modulus (remainder)
}


// 2. Relational Operators Function
void relational(int a, int b) {
    cout << "\n=== Relational Operators ===\n";
    cout << "a == b : " << (a == b) << endl; // Equal to
    cout << "a != b : " << (a != b) << endl; // Not equal
    cout << "a > b  : " << (a > b) << endl;  // Greater than
    cout << "a < b  : " << (a < b) << endl;  // Less than
    cout << "a >= b : " << (a >= b) << endl; // Greater or equal
    cout << "a <= b : " << (a <= b) << endl; // Less or equal
}


// 3. Logical Operators Function
void logical(int a, int b) {
    cout << "\n=== Logical Operators ===\n";
    cout << "(a > 0 && b > 0) : " << (a > 0 && b > 0) << endl; // AND
    cout << "(a > 0 || b < 0) : " << (a > 0 || b < 0) << endl; // OR
    cout << "!(a > b)         : " << !(a > b) << endl;          // NOT
}


// 4. Assignment Operators Function
void assignment(int a, int b) {
    cout << "\n=== Assignment Operators ===\n";

    int c = a; // Assign value of a to c
    cout << "c = a -> " << c << endl;

    c += b; // c = c + b
    cout << "c += b -> " << c << endl;

    c -= b; // c = c - b
    cout << "c -= b -> " << c << endl;

    c *= b; // c = c * b
    cout << "c *= b -> " << c << endl;

    c /= b; // c = c / b
    cout << "c /= b -> " << c << endl;
}


// 5. Unary Operators Function
void unary(int a) {
    cout << "\n=== Unary Operators ===\n";

    cout << "Original a: " << a << endl;

    cout << "Post-increment (a++) : " << a++ << endl;
    cout << "Value after a++      : " << a << endl;

    cout << "Pre-increment (++a)  : " << ++a << endl;

    cout << "Post-decrement (a--) : " << a-- << endl;
    cout << "Value after a--      : " << a << endl;

    cout << "Pre-decrement (--a)  : " << --a << endl;
}


// 6. Bitwise Operators Function
void bitwise(int a, int b) {
    cout << "\n=== Bitwise Operators ===\n";

    cout << "a & b  (AND)        : " << (a & b) << endl;
    cout << "a | b  (OR)         : " << (a | b) << endl;
    cout << "a ^ b  (XOR)        : " << (a ^ b) << endl;
    cout << "~a     (NOT)        : " << (~a) << endl;

    cout << "a << 1 (Left Shift) : " << (a << 1) << endl;
    cout << "a >> 1 (Right Shift): " << (a >> 1) << endl;
}


// Main Function
int main() {
    int a = 10, b = 5;

    // Calling all operator functions
    arithmetic(a, b);
    relational(a, b);
    logical(a, b);
    assignment(a, b);
    unary(a);
    bitwise(a, b);

    return 0;
}