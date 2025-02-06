/**
 * @file latihan20_1.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details Arrays of Objects
 */

#include <iostream>
using namespace std;

class c1 {
    int i;
public:
    c1(int j) { i = j; } // constructor
    int get_i() { return i; }
};

int main() {
    printf("%s\n", __FILE__);

    c1 ob[3] = { 2, 3, 4 }; // initializers
    int i;

    for (i = 0; i < (int)(sizeof(ob)/sizeof(ob[0])); i++) {
        cout << ob[i].get_i() << '\n';
    }

    return 0;
}