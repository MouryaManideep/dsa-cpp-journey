#include <iostream>
using namespace std;

/*
============================================================
TOPIC: SCOPE (LOCAL vs GLOBAL)
============================================================

Local Scope:
Declared inside function/block

Global Scope:
Declared outside all functions
Accessible everywhere
*/

// Global variable
int globalVar = 100;

// Local scope
void localExample() {
    int x = 10;
    cout << "Local x: " << x << endl;
}

// Global access
void globalExample() {
    cout << "Global variable: " << globalVar << endl;
}

// Shadowing
void shadowingExample() {
    int globalVar = 50;
    cout << "Shadowed globalVar: " << globalVar << endl;
}

int main() {
    localExample();
    globalExample();
    shadowingExample();

    return 0;
}