/**
 * @file latihan25_1.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details References : Reference Parameters
 */

// Use a reference parameter.
#include <iostream>
using namespace std;

void neg(int &i); // i now a reference

int main() {
    printf("%s\n", __FILE__);

    int x;
    x = 10;
    cout << x << " negated is ";

    neg(x); // no longer need the & operator
    cout << x << "\n";

    return 0;
}

void neg(int &i) {
    i = -i; // i is now a reference, don't need *
}
