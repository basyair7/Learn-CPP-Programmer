/**
 * @file latihan36.cxx
 * @brief Function Overloading, Copy Constructors,
 *        and Default Arguments 
 * @details Allowing Both Initialized and Uninitialized Objects
 */

#include <iostream>
#include <new>
using namespace std;

class powers {
    int x;
public:
    // overload constructor two ways
    powers() { x = 0; } // no initializer
    powers(int n) { x = n; } // initializer

    int getx() { return x; }
    void setx(int i) { x = i; }
};

int main() {
    cout << __FILE__ << '\n';

    powers ofTwo[] = {1, 2, 4, 8, 16}; // initialized
    powers ofThree[5]; // uninitialized
    powers *p;
    int i;

    // show powers of two
    cout << "Powers of two: ";
    for (i = 0; i < 5; i++) 
        cout << ofTwo[i].getx() << " ";

    cout << "\n\n";

    // set powers of three
    ofThree[0].setx(1);
    ofThree[1].setx(3);
    ofThree[2].setx(9);
    ofThree[3].setx(27);
    ofThree[4].setx(81);

    // show powers of three
    cout << "Powers of three: ";
    for (i = 0; i < 5; i++) 
        cout << ofThree[i].getx() << " ";
    cout << "\n\n";

    // dynamically allocated an array
    try { 
        p = new powers[5]; // no initialization
    } catch (bad_alloc& xa) {
        cout << "Allocation Failure\n";
        cerr << xa.what() << endl;
        return 1;
    }

    // initialize dynamic array with powers of two
    for (i = 0; i < 5; i++)
        p[i].setx(ofTwo[i].getx());

    // show powers of two
    cout << "Powers of two: ";
    for (i = 0; i < 5; i++)
        cout << p[i].getx() << " ";
    cout << "\n\n";

    delete[] p;
    return 0;
}