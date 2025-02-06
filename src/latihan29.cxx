/**
 * @file latihan29.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details C++'s Dynamic Allocation Operators
 */

#include <iostream>
#include <new>
using namespace std;

int main() {
    cout << __FILE__ << '\n';

    int *p;
    try {
        p = new int; // allocate space for an int
    }
    catch(const bad_alloc& err) {
        cout << "Allocation Failure\n";
        return 1;
    }

    *p = 100;
    
    cout << "At " << p << " ";
    cout << "is the value " << *p << '\n';

    delete p;

    return 0;
}