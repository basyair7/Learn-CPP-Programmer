/**
 * @file latihan21_2.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details Pointers to Objects
 */

#include <iostream>
using namespace std;

class cl {
public:
    int i;
    cl(int j) { i = j; }
};

int main() {
    printf("%s\n", __FILE__);

    cl ob(1);
    int *p;

    p = &ob.i; // get address of ob.i

    cout << *p << endl;

    return 0;
}