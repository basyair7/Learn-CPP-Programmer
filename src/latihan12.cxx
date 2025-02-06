/**
 * @file latihan12.cxx
 * @brief Classes and Objects
 * @details COnstructors with One Parameter: A Special Case
 */

#include <iostream>
using namespace std;

class X {
    int a;
public:
    X(int j) { a = j; }
    int gets() { return a; }
};

int main() {
    printf("%s\n", __FILE__);

    X ob = 100; // passes 99 to j
    // or
    // X ob = X(100);

    cout << ob.gets() << endl; // outputs: 100

    return 0;
}