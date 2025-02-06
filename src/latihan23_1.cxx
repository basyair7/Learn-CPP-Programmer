/**
 * @file latihan23_1.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details Pointers to Derived Types
 */

// This program contains an error.
#include <iostream>
using namespace std;

class base {
    int i;
public:
    void set_i(int num) { i = num; }
    int get_i() { return i; }
};

class derived : public base {
    int j;
public:
    void set_j(int num) { j = num; }
    int get_j() { return j; }
};

int main() {
    printf("%s\n", __FILE__);

    base *bp;
    derived d[2];

    bp = d;

    d[0].set_i(1);
    d[1].set_i(2);

    cout << bp->get_i() << " ";
    bp++; // relative to base, not derived
    cout << bp->get_i() << endl; // garbage value displayed
}