/**
 * @file latihan37.cxx
 * @brief Function Overloading, Copy Constructors,
 *        and Default Arguments
 * @details Copy Constructors
 */

/**
 * This program create a "safe" array class. Since space
 * for the array is allocated using new, a copy constructor
 * is provided to allocate memory when one array object is
 * used to initalize another.
 */

#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

class array {
    int *p;
    int size;
public:
    array(int sz) {
        try {
            p = new int[sz];
        } catch (bad_alloc& xa) {
            cout << "Allocation Failure\n";
            cerr << xa.what() << endl;
            exit(EXIT_FAILURE);
        }
        size = sz;
    }
    ~array() { delete[] p; }

    // copy constructor
    array(const array &a);

    void put(int i, int j) {
        if (i >= 0 && i < size)
            p[i] = j;
    }

    int get(int i) {
        return p[i];
    }
};

// Copy Constructor
array::array(const array &a) {
    int i;

    try {
        p = new int[a.size];
    } catch(bad_alloc& xa) {
        cout << "Allocation Failure\n";
        cerr << xa.what() << endl;
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < a.size; i++) p[i] = a.p[i];
}

int main() {
    cout << __FILE__ << '\n';
    
    array num(10);
    int i;

    for (i = 0; i < 10; i++) num.put(i, i);
    for (i = 9; i >= 0; i--) cout << num.get(i);

    // create another array and initialize with num
    array x(num); // invokes copy constructor
    for (i = 0; i < 10; i++) cout << x.get(i);
    cout << endl;

    return 0;
}