#include <iostream>
using namespace std;

/*
============================================================
TOPIC: BITWISE OPERATORS
============================================================

Concept:
Bitwise operators work on binary representation of numbers.

Operators:
&  -> AND
|  -> OR
^  -> XOR
<< -> Left Shift (multiply by 2^n)
>> -> Right Shift (divide by 2^n)
*/

// AND
void bitwiseAND() {
    int a = 5, b = 3;
    cout << "AND (5 & 3): " << (a & b) << endl;
}

// OR
void bitwiseOR() {
    int a = 5, b = 3;
    cout << "OR (5 | 3): " << (a | b) << endl;
}

// XOR
void bitwiseXOR() {
    int a = 5, b = 3;
    cout << "XOR (5 ^ 3): " << (a ^ b) << endl;
}

// Left Shift
void leftShift() {
    int a = 5;
    cout << "Left Shift (5 << 1): " << (a << 1) << endl;
}

// Right Shift
void rightShift() {
    int a = 8;
    cout << "Right Shift (8 >> 1): " << (a >> 1) << endl;
}

// Check even/odd using bitwise
void checkEvenOdd(int n) {
    if (n & 1)
        cout << n << " is Odd\n";
    else
        cout << n << " is Even\n";
}

int main() {
    bitwiseAND();
    bitwiseOR();
    bitwiseXOR();
    leftShift();
    rightShift();
    checkEvenOdd(10);

    return 0;
}