/**
 * @file latihan21_1.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details Pointers to Objects
 */

#include <iostream>
using namespace std;

class cl {
    int i;
public:
    cl() { i = 0; }
    cl(int j) { i = j; }
    int get_i() { return i; }
};

int main() {
    printf("%s\n", __FILE__);

    cl ob[3] = {2, 3, 4};
    cl *p;
    int i;

    p = ob; // get start of array
    for (i = 0; i < 3; i++) {
        cout << p->get_i() << '\n';
        p++; // point to next object
    }

    return 0;
}