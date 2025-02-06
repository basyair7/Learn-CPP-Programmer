/**
 * @file latihan20_2.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details Arrays of Objects
 */

#include <iostream>
using namespace std;

class c1 {
    int h;
    int i;
public:
    c1(int j, int k) { h = j; i = k; }
    int get_i() { return i; }
    int get_h() { return h; }
};

int main() {
    printf("%s\n", __FILE__);

    c1 ob[3] = {
        c1(1, 2), // initialize
        c1(3, 4),
        c1(5, 6)
    };

    for (int i = 0; i < 3; i++) {
        cout << ob[i].get_h();
        cout << ", ";
        cout << ob[i].get_i() << '\n';
    }

    return 0;
}