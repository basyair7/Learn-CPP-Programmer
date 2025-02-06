/**
 * @file latihan21.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details Pointers to Objects
 */

#include <iostream>
using namespace std;

class cl {
    int i;
public:
    cl(int j) { i = j; }
    int get_i() { return i; }
};

int main() {
    printf("%s\n", __FILE__);

    cl ob(88), *p;

    p = &ob; // get address of ob

    cout << p->get_i() << endl; // use -> to call get_i()

    return 0;
}