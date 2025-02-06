/**
 * @file latihan25.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details References : Reference Parameters
 */

// Manually create a call-by-reference using a pointer.
#include <iostream>
using namespace std;

void neg(int *i);

int main() {
    printf("%s\n", __FILE__);

    int x;
    x = 10;
    cout << x << " negated is ";

    neg(&x);
    cout << x << "\n";

    return 0;
}

void neg(int *i) {
    *i = -*i;
}
