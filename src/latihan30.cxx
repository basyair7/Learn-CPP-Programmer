/**
 * @file latihan30.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details C++'s Dynamic Allocation Operators : 
 *          Initializing Allocated Memory
 */

#include <iostream>
#include <new>
using namespace std;

int main(void) {
    cout << __FILE__ << '\n';

    int *p;

    try {
        p = new int (87); // initialize to 87
    }
    catch(const bad_alloc& e) {
        cout << "Allocation Failure\n";
        cerr << e.what() << '\n';

        return 1;
    }

    cout << "At " << p << " ";
    cout << "is the value " << *p << '\n';
    
    delete p;

    return 0;
}