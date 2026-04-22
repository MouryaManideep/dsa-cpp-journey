#include <iostream>
using namespace std;

/*
============================================================
TOPIC: OPERATOR PRECEDENCE & ASSOCIATIVITY
============================================================

Concept:
Determines order of execution in expressions.

Priority:
() > *, / > +, - > <<, >> > &, ^, |

Associativity:
Mostly Left → Right
*/

// Without parentheses
void example1() {
    int result = 2 + 3 * 4;
    cout << "2 + 3 * 4 = " << result << endl;
}

// With parentheses
void example2() {
    int result = (2 + 3) * 4;
    cout << "(2 + 3) * 4 = " << result << endl;
}

// Associativity
void associativityExample() {
    int a = 10, b = 5, c = 2;
    int result = a - b - c;
    cout << "a - b - c = " << result << endl;
}

int main() {
    example1();
    example2();
    associativityExample();

    return 0;
}