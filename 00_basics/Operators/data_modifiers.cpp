#include <iostream>
using namespace std;

/*
============================================================
TOPIC: DATA TYPE MODIFIERS
============================================================

Modifiers change size/range of data types.

Size:
short, long, long long

Sign:
signed, unsigned
*/

// Size modifiers
void sizeModifiers() {
    short int a = 10;
    long int b = 100000;
    long long int c = 10000000000;

    cout << "short: " << a << endl;
    cout << "long: " << b << endl;
    cout << "long long: " << c << endl;
}

// Sign modifiers
void signModifiers() {
    signed int a = -10;
    unsigned int b = 10;

    cout << "Signed: " << a << endl;
    cout << "Unsigned: " << b << endl;
}

// Overflow example
void overflowExample() {
    unsigned int x = 0;
    x = x - 1;

    cout << "Overflow result: " << x << endl;
}

int main() {
    sizeModifiers();
    signModifiers();
    overflowExample();

    return 0;
}