/**
 * @file latihan31.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details C++'s Dynamic Allocation Operators : 
 *          Allocating Arrays
 */

#include <iostream>
#include <new>
using namespace std;

int main() {
    cout << __FILE__ << '\n';

    int *p, i;

    try {
        p = new int [10]; // allocated 10 integer array
    } catch(bad_alloc& xa) {
        cout << "Allocation Failure\n";
        cerr << xa.what() << '\n';
        return 1;
    }

    for (i = 0; i < 10; i++)
        p[i] = i;

    for (i = 0; i < 10; i++)
        cout << p[i] << " ";
    cout << endl;

    delete [] p; // release the array

    return 0;
}
