/**
 * @file latihan25_2.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details References : Reference Parameters
 */

#include <iostream>
using namespace std;

void swap(int &i, int &j);

int main() {
    printf("%s\n", __FILE__);

    int a = 1, b = 2, c = 3, d = 4;

    cout << "a and b: " << a << " " << b << "\n";
    swap(a, b); // no & operator needed
    cout << "a and b: " << a << " " << b << "\n";

    cout << "c and d: " << c << " " << d << "\n";
    swap(c, d); // no & operator needed
    cout << "c and d: " << c << " " << d << "\n";

    return 0;
}

void swap(int &i, int &j) {
    int t;
    // no * operator needed
    t = i;
    i = j;
    j = t;
}
