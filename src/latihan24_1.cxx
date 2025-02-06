/**
 * @file latihan24_1.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details Pointers to Class Members
 */

#include <iostream>
using namespace std;

class cl {
public:
    cl(int i) { val = i; }
    int val;
    int double_val() { return val + val; }
};

int main() {
    printf("%s\n", __FILE__);

    int cl::*data; // data member pointer
    int (cl::*func)(); // function member pointer
    cl ob1(1), ob2(2); // create objects
    cl *p1, *p2;

    // access objects through a pointer
    p1 = &ob1;
    p2 = &ob2;

    data = &cl::val; // get offset of val
    func = &cl::double_val; // get offset of double_val()

    cout << "Here are values: ";
    cout << p1->*data << " " << p2->*data << "\n";

    cout << "Here they are doubled: ";
    cout << (p1->*func)() << " ";
    cout << (p2->*func)() << "\n";

    return 0;
}