/**
 * @file latihan26.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details References : Passing References to Objects
 */

#include <iostream>
using namespace std;

class cl {
    int id;
public:
    int i;
    cl(int i);
    ~cl();
    void neg(cl &o) { o.i = -o.i; } // no temporary created
};

cl::cl(int num) {
    cout << "Constructing " << num << "\n";
    id = num;
}

cl::~cl() {
    cout << "Destructing " << id << "\n";
}

int main() {
    printf("%s\n", __FILE__);

    cl o(1);

    o.i = 10;
    o.neg(o);

    cout << o.i << "\n";

    return 0;
}
