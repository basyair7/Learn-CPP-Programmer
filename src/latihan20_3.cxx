/**
 * @file latihan20_3.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details Creating Initialized vs. Unitialized Arrays
 */

#include <iostream>
using namespace std;

class c1 {
    int h;
    int i;
public:
    c1() { i = h = 10;}
    c1(int j, int k) { h = j; i = k; }
    int get_i() { return i; }
    int get_h() { return h; }
};

int main() {
    printf("%s\n", __FILE__);

    c1 ob1[3] = { // initialized
        c1(1, 2), 
        c1(3, 4),
        c1(5, 6)
    };

    c1 ob2; // uninitialized

    for (int i = 0; i < 3; i++) {
        cout << ob1[i].get_h();
        cout << ", ";
        cout << ob1[i].get_i() << '\n';
    } 
    /* outputs: 
        1, 2, 
        3, 4, 
        5, 6
    */

    cout << ob2.get_h() << ", " << ob2.get_i() << '\n'; // outputs: 10, 10

    return 0;
}