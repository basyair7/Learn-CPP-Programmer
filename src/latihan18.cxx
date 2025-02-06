/**
 * @file latihan18.cxx
 * @brief Classes and Objects
 * @details Returning Objects
 */

// Returning objects from a function.
#include <iostream>
using namespace std;

class myclass {
    int i;
public:
    void set_i(int n) { i = n; }
    int get_i() { return i; }
};

myclass f(); // return object of type myclass

int main() {
    printf("%s\n", __FILE__);

    myclass o;

    o = f();

    cout << o.get_i() << "\n";

    return 0;
}

myclass f() {
    myclass x;

    x.set_i(100);
    return x;
}