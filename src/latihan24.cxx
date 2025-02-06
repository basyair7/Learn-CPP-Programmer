/**
 * @file latihan24.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details Pointers to Class Members
 */

#include <iostream>
using namespace std;

class cl {
public:
    cl(int i) { this->val = i; }
    int val;
    int double_val() { 
        return this->val + this->val; 
    }
};

int main() {
    printf("%s\n", __FILE__);

    int cl::*data; // data member pointer
    int (cl::*func) (); // function member pointer
    cl ob1(1), ob2(2); // create objects

    data = &cl::val; // get offset of val
    func = &cl::double_val; // get offset of double_val()

    cout << "Here are values: ";
    cout << ob1.*data << " " << ob2.*data << '\n';

    cout << "Here they are doubled: ";
    cout << (ob1.*func) () << " ";
    cout << (ob2.*func) () << '\n';

    return 0;
}