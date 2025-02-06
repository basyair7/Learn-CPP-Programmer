/**
 * @file latihan33.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details C++'s Dynamic Allocation Operators : 
 *          The nothrow Alternative
 */

// Demonstrate nothrow version of new.
#include <iostream>
#include <new>
using namespace std;

int main() {
    cout << __FILE__ << endl;
    int *p, i;

    p = new(nothrow) int[32]; // use nothrow option
    if (!p) {
        cout << "Allocation failure.\n";
        return 1;
    }

    for (i = 0; i < 32; i++) p[i] = i;

    for(i = 0; i < 32; i++)
        cout << p[i] << " ";

    cout << endl;
    
    delete[] p; // free the memory
    return 0;
}
